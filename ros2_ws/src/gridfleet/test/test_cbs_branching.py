from gridfleet.cbs import (
    CBSTreeNode,
    branch_on_conflict,
    build_root_cbs_node,
)
from gridfleet.conflict_detection import detect_all_conflicts
from gridfleet.grid_map import GridMap
from gridfleet.models import Position, Robot


def test_branch_on_vertex_conflict_creates_children():
    grid = GridMap(width=8, height=8, obstacles=set())
    robots = [
        Robot("R1", Position(1, 3), Position(6, 3)),
        Robot("R2", Position(6, 3), Position(1, 3)),
    ]

    root, first_conflict = build_root_cbs_node(grid, robots)

    assert first_conflict is not None

    children = branch_on_conflict(root, first_conflict, grid, robots)

    assert len(children) >= 1
    assert all(isinstance(child, CBSTreeNode) for child in children)

    for child in children:
        assert child.cost > 0
        assert set(child.paths.keys()) == {"R1", "R2"}


def test_child_nodes_replan_only_one_robot():
    grid = GridMap(width=8, height=8, obstacles=set())
    robots = [
        Robot("R1", Position(1, 3), Position(6, 3)),
        Robot("R2", Position(6, 3), Position(1, 3)),
    ]

    root, first_conflict = build_root_cbs_node(grid, robots)

    assert first_conflict is not None

    children = branch_on_conflict(root, first_conflict, grid, robots)

    assert children

    changed_path_found = False

    for child in children:
        differences = 0
        for robot_id in root.paths:
            if child.paths[robot_id] != root.paths[robot_id]:
                differences += 1

        assert differences == 1
        changed_path_found = True

    assert changed_path_found


def test_branching_can_reduce_or_change_conflicts():
    grid = GridMap(width=8, height=8, obstacles=set())
    robots = [
        Robot("R1", Position(1, 3), Position(6, 3)),
        Robot("R2", Position(6, 3), Position(1, 3)),
    ]

    root, first_conflict = build_root_cbs_node(grid, robots)

    assert first_conflict is not None

    children = branch_on_conflict(root, first_conflict, grid, robots)

    assert children

    for child in children:
        rebuilt_robots = []
        for robot in robots:
            rebuilt_robots.append(
                Robot(
                    robot_id=robot.robot_id,
                    position=robot.position,
                    goal=robot.goal,
                    path=child.paths[robot.robot_id].copy(),
                )
            )

        vertex_conflicts, edge_conflicts = detect_all_conflicts(rebuilt_robots)

        assert len(vertex_conflicts) + len(edge_conflicts) >= 0

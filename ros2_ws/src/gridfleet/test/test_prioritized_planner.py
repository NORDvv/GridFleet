from gridfleet.conflict_detection import detect_all_conflicts
from gridfleet.grid_map import GridMap
from gridfleet.models import Position, Robot
from gridfleet.prioritized_planner import prioritized_plan_paths


def test_prioritized_planner_avoids_head_on_conflict():
    grid = GridMap(width=8, height=8, obstacles=set())

    robots = [
        Robot("R1", Position(1, 3), Position(6, 3)),
        Robot("R2", Position(6, 3), Position(1, 3)),
    ]

    prioritized_plan_paths(grid, robots, goal_hold_steps=10, max_time=30)

    vertex_conflicts, edge_conflicts = detect_all_conflicts(robots)

    assert vertex_conflicts == []
    assert edge_conflicts == []
    assert robots[0].path
    assert robots[1].path


def test_prioritized_planner_handles_waiting():
    grid = GridMap(width=5, height=5, obstacles=set())

    robots = [
        Robot("R1", Position(0, 2), Position(4, 2)),
        Robot("R2", Position(2, 2), Position(0, 2)),
    ]

    prioritized_plan_paths(grid, robots, goal_hold_steps=10, max_time=30)

    vertex_conflicts, edge_conflicts = detect_all_conflicts(robots)

    assert vertex_conflicts == []
    assert edge_conflicts == []

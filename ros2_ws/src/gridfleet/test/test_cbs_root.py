from gridfleet.cbs import (
    CBSTreeNode,
    build_root_cbs_node,
    compute_solution_cost,
)
from gridfleet.grid_map import GridMap
from gridfleet.models import Position, Robot


def test_compute_solution_cost():
    paths = {
        "R1": [Position(0, 0), Position(1, 0), Position(2, 0)],
        "R2": [Position(2, 2), Position(2, 3)],
    }

    cost = compute_solution_cost(paths)

    assert cost == 5


def test_build_root_cbs_node_returns_paths_and_cost():
    grid = GridMap(width=5, height=5, obstacles=set())
    robots = [
        Robot("R1", Position(0, 0), Position(2, 0)),
        Robot("R2", Position(4, 4), Position(2, 4)),
    ]

    root, first_conflict = build_root_cbs_node(grid, robots)

    assert isinstance(root, CBSTreeNode)
    assert root.vertex_constraints == []
    assert root.edge_constraints == []
    assert set(root.paths.keys()) == {"R1", "R2"}
    assert root.cost > 0
    assert first_conflict is None


def test_build_root_cbs_node_detects_conflict():
    grid = GridMap(width=8, height=8, obstacles=set())
    robots = [
        Robot("R1", Position(1, 3), Position(6, 3)),
        Robot("R2", Position(6, 3), Position(1, 3)),
    ]

    root, first_conflict = build_root_cbs_node(grid, robots)

    assert isinstance(root, CBSTreeNode)
    assert root.cost > 0
    assert first_conflict is not None

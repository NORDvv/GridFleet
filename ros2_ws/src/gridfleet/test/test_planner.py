from gridfleet.grid_map import GridMap
from gridfleet.models import Position
from gridfleet.planner import bfs_plan


def test_bfs_finds_path():
    grid = GridMap(
        width=5,
        height=5,
        obstacles={Position(2, 1), Position(2, 2), Position(2, 3)},
    )

    start = Position(0, 2)
    goal = Position(4, 2)

    path = bfs_plan(grid, start, goal)

    assert path[0] == start
    assert path[-1] == goal
    assert len(path) > 0


def test_bfs_returns_empty_when_no_path():
    grid = GridMap(
        width=3,
        height=3,
        obstacles={Position(1, 0), Position(1, 1), Position(1, 2)},
    )

    start = Position(0, 1)
    goal = Position(2, 1)

    path = bfs_plan(grid, start, goal)

    assert path == []

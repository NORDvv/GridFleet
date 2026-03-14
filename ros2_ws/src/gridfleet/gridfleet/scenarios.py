from .grid_map import GridMap
from .models import Position, Robot


def basic_scenario() -> tuple[GridMap, list[Robot]]:
    grid = GridMap(
        width=8,
        height=8,
        obstacles={
            Position(3, 2),
            Position(3, 3),
            Position(3, 4),
            Position(5, 5),
        },
    )

    robots = [
        Robot("R1", Position(0, 0), Position(7, 7)),
        Robot("R2", Position(7, 0), Position(0, 7)),
        Robot("R3", Position(0, 7), Position(7, 0)),
    ]
    return grid, robots


def bfs_demo_scenario() -> tuple[GridMap, list[Robot]]:
    grid = GridMap(
        width=8,
        height=8,
        obstacles={
            Position(3, 0),
            Position(3, 1),
            Position(3, 2),
            Position(3, 3),
            Position(3, 5),
            Position(3, 6),
            Position(3, 7),
        },
    )

    robots = [
        Robot("R1", Position(0, 2), Position(7, 2)),
    ]

    return grid, robots

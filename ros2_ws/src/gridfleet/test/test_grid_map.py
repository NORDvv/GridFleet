from gridfleet.grid_map import GridMap
from gridfleet.models import Position


def test_neighbors_exclude_obstacles_and_out_of_bounds():
    grid = GridMap(
        width=3,
        height=3,
        obstacles={Position(1, 0)},
    )

    neighbors = grid.neighbors(Position(0, 0))

    assert Position(1, 0) not in neighbors
    assert Position(0, 1) in neighbors

from gridfleet.cbs import (
    EdgeConstraint,
    VertexConstraint,
    constrained_bfs_plan,
)
from gridfleet.grid_map import GridMap
from gridfleet.models import Position, Robot


def test_constrained_bfs_finds_unconstrained_path():
    grid = GridMap(width=5, height=5, obstacles=set())
    robot = Robot("R1", Position(0, 0), Position(2, 0))

    path = constrained_bfs_plan(grid, robot)

    assert path
    assert path[0] == Position(0, 0)
    assert path[-1] == Position(2, 0)


def test_constrained_bfs_respects_vertex_constraint():
    grid = GridMap(width=5, height=5, obstacles=set())
    robot = Robot("R1", Position(0, 0), Position(2, 0))

    vertex_constraints = [
        VertexConstraint(
            robot_id="R1",
            position=Position(1, 0),
            time_step=1,
        ),
    ]

    path = constrained_bfs_plan(
        grid,
        robot,
        vertex_constraints=vertex_constraints,
    )

    assert path
    assert not (len(path) > 1 and path[1] == Position(1, 0))


def test_constrained_bfs_respects_edge_constraint():
    grid = GridMap(width=5, height=5, obstacles=set())
    robot = Robot("R1", Position(0, 0), Position(2, 0))

    edge_constraints = [
        EdgeConstraint(
            robot_id="R1",
            from_pos=Position(0, 0),
            to_pos=Position(1, 0),
            time_step=0,
        ),
    ]

    path = constrained_bfs_plan(
        grid,
        robot,
        edge_constraints=edge_constraints,
    )

    assert path
    assert not (
        len(path) > 1
        and path[0] == Position(0, 0)
        and path[1] == Position(1, 0)
    )


def test_constrained_bfs_returns_empty_if_start_is_forbidden():
    grid = GridMap(width=5, height=5, obstacles=set())
    robot = Robot("R1", Position(0, 0), Position(2, 0))

    vertex_constraints = [
        VertexConstraint(
            robot_id="R1",
            position=Position(0, 0),
            time_step=0,
        ),
    ]

    path = constrained_bfs_plan(
        grid,
        robot,
        vertex_constraints=vertex_constraints,
    )

    assert path == []

from gridfleet.conflict_detection import (
    detect_all_conflicts,
)
from gridfleet.models import Position, Robot


def test_detects_vertex_conflict():
    robot_a = Robot(
        "R1",
        position=Position(0, 0),
        goal=Position(1, 0),
        path=[Position(0, 0), Position(1, 0), Position(2, 0)],
    )
    robot_b = Robot(
        "R2",
        position=Position(2, 0),
        goal=Position(1, 0),
        path=[Position(2, 0), Position(1, 0), Position(0, 0)],
    )

    vertex_conflicts, edge_conflicts = detect_all_conflicts([robot_a, robot_b])

    assert len(vertex_conflicts) == 1
    assert vertex_conflicts[0].time_step == 1
    assert vertex_conflicts[0].position == Position(1, 0)
    assert edge_conflicts == []


def test_detects_edge_conflict():
    robot_a = Robot(
        "R1",
        position=Position(0, 0),
        goal=Position(1, 0),
        path=[Position(0, 0), Position(1, 0)],
    )
    robot_b = Robot(
        "R2",
        position=Position(1, 0),
        goal=Position(0, 0),
        path=[Position(1, 0), Position(0, 0)],
    )

    vertex_conflicts, edge_conflicts = detect_all_conflicts([robot_a, robot_b])

    assert vertex_conflicts == []
    assert len(edge_conflicts) == 1
    assert edge_conflicts[0].time_step == 0

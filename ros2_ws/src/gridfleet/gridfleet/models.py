from dataclasses import dataclass


@dataclass(frozen=True, slots=True)
class Position:
    x: int
    y: int


@dataclass(slots=True)
class Robot:
    robot_id: str
    position: Position
    goal: Position
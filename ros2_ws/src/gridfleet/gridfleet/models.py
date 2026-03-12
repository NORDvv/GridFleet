from dataclasses import dataclass, field


@dataclass(frozen=True, slots=True)
class Position:
    x: int
    y: int


@dataclass(slots=True)
class Robot:
    robot_id: str
    position: Position
    goal: Position
    path: list[Position] = field(default_factory=list)
from __future__ import annotations

from dataclasses import dataclass
from typing import Iterable

from .models import Position


@dataclass(slots=True)
class GridMap:
    width: int
    height: int
    obstacles: set[Position]

    def __init__(self, width: int, height: int, obstacles: Iterable[Position] | None = None) -> None:
        self.width = width
        self.height = height
        self.obstacles = set(obstacles or [])

    def in_bounds(self, pos: Position) -> bool:
        return 0 <= pos.x < self.width and 0 <= pos.y < self.height

    def is_blocked(self, pos: Position) -> bool:
        return pos in self.obstacles

    def is_free(self, pos: Position) -> bool:
        return self.in_bounds(pos) and not self.is_blocked(pos)
from __future__ import annotations

import time

from .scenarios import basic_scenario
from .simulator import Simulator


def main() -> None:
    grid, robots = basic_scenario()
    sim = Simulator(grid, robots)

    for step in range(20):
        print(f"\nStep {step}")
        print(sim.render_ascii())
        sim.step_demo()
        time.sleep(0.5)


if __name__ == "__main__":
    main()
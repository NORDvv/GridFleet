from gridfleet.cbs import assign_paths_to_robots, cbs_solve
from gridfleet.conflict_detection import detect_all_conflicts
from gridfleet.grid_map import GridMap
from gridfleet.models import Position, Robot


def test_cbs_solve_returns_conflict_free_paths_for_head_on_case():
    grid = GridMap(width=8, height=8, obstacles=set())
    robots = [
        Robot("R1", Position(1, 3), Position(6, 3)),
        Robot("R2", Position(6, 3), Position(1, 3)),
    ]

    paths = cbs_solve(grid, robots, max_time=30, max_high_level_expansions=200)

    assign_paths_to_robots(robots, paths)

    vertex_conflicts, edge_conflicts = detect_all_conflicts(robots)

    assert vertex_conflicts == []
    assert edge_conflicts == []
    assert robots[0].path
    assert robots[1].path


def test_cbs_solve_handles_three_robot_case():
    grid = GridMap(width=8, height=8, obstacles=set())
    robots = [
        Robot("R1", Position(1, 3), Position(6, 3)),
        Robot("R2", Position(6, 3), Position(1, 3)),
        Robot("R3", Position(3, 1), Position(3, 6)),
    ]

    paths = cbs_solve(grid, robots, max_time=40, max_high_level_expansions=500)

    assign_paths_to_robots(robots, paths)

    vertex_conflicts, edge_conflicts = detect_all_conflicts(robots)

    assert vertex_conflicts == []
    assert edge_conflicts == []


def test_cbs_solve_returns_direct_solution_when_no_conflict_exists():
    grid = GridMap(width=6, height=6, obstacles=set())
    robots = [
        Robot("R1", Position(0, 0), Position(2, 0)),
        Robot("R2", Position(5, 5), Position(3, 5)),
    ]

    paths = cbs_solve(grid, robots, max_time=20, max_high_level_expansions=100)

    assign_paths_to_robots(robots, paths)

    vertex_conflicts, edge_conflicts = detect_all_conflicts(robots)

    assert vertex_conflicts == []
    assert edge_conflicts == []

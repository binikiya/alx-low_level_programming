#!/usr/bin/python3
"""
5-island_perimeter
"""

def island_perimeter(grid):
    """returns the perimeter of island described in grid"""
    p = 0
    w = len(grid[0])
    h = len(grid)
    grid.insert(0, [0 for x in range(w)])
    grid.append([0 for x in range(w)])
    for r in range(h + 2):
        grid[r].append(0)
        grid[r].insert(0, 0)
    for r in range(1, h + 1):
        for c in range(1, w + 1):
            if grid[r][c - 1] == 0:
                p += 1
            if grid[r][c + 1] == 0:
                p += 1
            if grid[r + 1][c] == 0:
                p += 1;
            if grid[r - 1][c] == 0:
                p += 1;
    return p

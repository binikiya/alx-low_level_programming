#!/usr/bin/python3
"""
5-island_perimeter
"""

def island_perimeter(grid):
    """returns the perimeter of island described in grid"""
    r = len(grid)
    p = 0
    for i in range(r):
        c = len(grid[i])
        for j in range(c):
            if grid[i][j] == 1:
                l = 1 if j == 0 or grid[i][j - 1] == 0 else 0
                t = 1 if i == 0 or grid[i - 1][j] == 0 else 0
                r = 1 if j == c - 1 or grid[i][j + 1] == 0 else 0
                b = 1 if i == r - 1 or grid[i + 1][j] == 0 else 0
                p += (l + t + r + b)
    return p

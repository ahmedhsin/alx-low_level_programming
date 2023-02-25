#!/usr/bin/python3
"""get permiter module"""


def get_val(grid, i, j):
    """return the number of faces not equal to one"""
    n = len(grid)
    m = len(grid[0])
    value = 0
    if (i-1 < 0):
        value += 1
    elif grid[i-1][j] == 0:
        value += 1
    if (i+1 >= n):
        value += 1
    elif  grid[i+1][j] == 0:
        value += 1
    if (j-1 < 0):
        value += 1
    elif  grid[i][j-1] == 0:
        value += 1
    if (j+1 >= m):
        value += 1
    elif  grid[i][j+1] == 0:
        value += 1
    return value


def island_perimeter(grid):
    """Retun permiter func"""
    ans = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                ans += get_val(grid, i, j)
    return ans


if __name__ == "__main__":
    grid = [
        [0, 1, 1, 0, 0, 0]
    ]
    print(island_perimeter(grid))

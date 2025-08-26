x, y, n = map(int, input().split())
grid = [[1,2,3],[4,5,6],[7,8,9]]
cur = [[0]*3 for _ in range(3)]
cur[x-1][y-1] = grid[x-1][y-1]
for _ in range(n):
    next = [[0]*3 for _ in range(3)]
    for i in range(3):
        for j in range(3):
            for dx, dy in [(0,1),(0,-1),(1,0),(-1,0)]:
                ni, nj = i+dx, j+dy
                if 0<=ni<3 and 0<=nj<3:
                    next[ni][nj] += cur[i][j] * grid[ni][nj]
    cur = next
print(sum(sum(row) for row in cur))
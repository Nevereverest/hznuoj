matrix = []
for i in range(4):
    row = list(map(int, input().split()))
    matrix.append(row)

min_value = matrix[0][0]
min_row = 0
min_col = 0

for i in range(4):
    for j in range(4):
        if matrix[i][j] < min_value:
            min_value = matrix[i][j]
            min_row = i
            min_col = j

print(f"{min_row} {min_col}")
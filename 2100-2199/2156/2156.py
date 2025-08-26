input()
l = list(map(int, input().split()))
cur_sum = max_sum = 0
for i in l:
    cur_sum = max(0, cur_sum + i)
    max_sum = max(max_sum, cur_sum)
print(max_sum)
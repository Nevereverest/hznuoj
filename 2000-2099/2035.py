door = [list(map(float, input().split())) for _ in range(int(input()))]
minv, maxv = map(float, input().split())
door = [x for x in door if x[0]/maxv + x[1] > x[0]/minv]
print("let_s_die_together" if not door else "%.2f" % (min(door, key=lambda x: x[0])[0]/minv))
input()
a = input().split()
print(sum(int(s[3]) > int(s[0]) + int(s[1]) + int(s[2]) for s in a))
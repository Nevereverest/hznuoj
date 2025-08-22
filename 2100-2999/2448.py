n = int(input())
print("YES" if n == sum(int(num) ** 3 for num in str(n)) else "NO")
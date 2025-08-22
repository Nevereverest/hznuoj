a = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
for _ in range(int(input())):print(' '.join([a[int(c)] for c in input() if c in '0123456789']))
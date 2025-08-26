s=input().strip()
max_len=0
for i in range(len(s)):
    left,right=i,i
    while left >= 0 and right < len(s) and s[left] == s[right]:
        left -= 1
        right += 1
    odd_len = right - left - 1
    left, right = i, i + 1
    while left >= 0 and right < len(s) and s[left] == s[right]:
        left -= 1
        right += 1
    even_len = right - left - 1
    max_len = max(max_len, odd_len, even_len)
print(max_len)
import re
for _ in range(int(input())):
    s = input()
    s = re.sub(r'ssr', '***', s, flags=re.IGNORECASE)
    s = re.sub(r'Africa', 'AFRICA', s, flags=re.IGNORECASE)
    print(s)
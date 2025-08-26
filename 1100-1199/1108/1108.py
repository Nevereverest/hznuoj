import ipaddress
a = int(ipaddress.IPv4Address(input()))
b = int(ipaddress.IPv4Address(input()))
n = int(input())
c = a & b
for _ in range(n):
    print("INNER" if int(ipaddress.IPv4Address(input())) & b == c else "OUTER")
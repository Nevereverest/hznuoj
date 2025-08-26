s = []
for _ in range(int(input())):
    data = input().split()
    scores = list(map(float, data[1:]))
    s.append({"n": data[0], "sc": scores})

for i in range(3):
    best = max(s, key=lambda x: x["sc"][i])
    print(f"{best['n']},{','.join(f'{score:.2f}' for score in best['sc'])}")
print()

s.sort(key=lambda x: sum(x["sc"]), reverse=True)
for student in s:
    print(f"{student['n']},{','.join(f'{score:.2f}' for score in student['sc'])}")
print()

for student in s:
    total = sum(student["sc"])
    if total > 240:
        average = total / 3
        print(f"{student['n']},{','.join(f'{score:.2f}' for score in student['sc'])},{average:.2f}")
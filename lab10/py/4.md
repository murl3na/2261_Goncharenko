# Задача 1
```py
n = int(input())
c = 0
x = 1
while c < n:
    x += 1
    p = True
    d = 2
    while d * d <= x:
        if x % d == 0:
            p = False
            break
        d += 1
    if p:
        c += 1
print(x)
```
# Задача 2
```py
n = int(input())
a = list(map(int, input().split()))
s = set()
r = n
for i in range(n):
    s.add(a[i])
    if len(s) == 3:
        r = i + 1
        break
print(r)
```

# Задача 3
```py
from string import ascii_lowercase

s = input().strip()
b = ''
m = 0
for ch in ascii_lowercase:
    k = s.count(ch)
    if k > m:
        m = k
        b = ch
print(s.replace(b, ''))
```
# Задача 4
```py
n = int(input())
rows = ["1234567890", "qwertyuiop", "asdfghjkl", "zxcvbnm"]
for _ in range(n):
    s = input().strip()
    ok = True
    for r in rows:
        f = False
        for ch in s:
            if ch in r:
                f = True
                break
        if not f:
            ok = False
            break
    print("strong" if ok else "weak")
```

# Задача 5
```py
t = input().strip()
n = int(input())
o = ["6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"]
r = []
for _ in range(n):
    a = input().split()
    b = input().split()
    if a[1] == b[1]:
        r.append(1 if o.index(b[0]) > o.index(a[0]) else 0)
    elif b[1] == t:
        r.append(1)
    else:
        r.append(0)
print(*r)
```

# Задача 1
```py
n, m = map(int, input().split())
a = list(map(float, input().split()))
for _ in range(m):
    b = a[:]
    b[0] = (2 * a[0] + a[1]) / 3
    for i in range(1, n - 1):
        b[i] = (a[i - 1] + a[i] + a[i + 1]) / 3
    b[n - 1] = (2 * a[n - 1] + a[n - 2]) / 3
    a = b
print(*a)
```
# Задача 2 
```py
n = int(input())
a = list(map(int, input().split()))
a.sort(key=lambda x: abs(x) * 2 + (x > 0))
print(*a)
```
# задача 3
```py
s = input()
n = int(input())
d = {}
for _ in range(n):
    k = input()
    v = input()
    d[k] = v
for i in range(1, len(s)):
    a = s[:i]
    b = s[i:]
    if a in d and b in d:
        print(d[a] + d[b])
        break
```
# Задача 4
```py
n, m = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]
for j in range(m):
    for i in range(n):
        print(a[i][j], end=' ')
    print()
```

# Задача 5
```py
import math
w, h, s = map(int, input().split())
n = int(input())
p = []
for _ in range(n):
    x, y = map(int, input().split())
    p.append((x, y))
p = sorted(p, key=lambda t: (t[0] // s, -t[1] if (t[0] // s) % 2 else t[1], t[0]))
d = 0.0
for i in range(1, n):
    dx = p[i][0] - p[i - 1][0]
    dy = p[i][1] - p[i - 1][1]
    d += math.hypot(dx, dy)
print(d)
```

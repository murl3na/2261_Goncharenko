numbers = list(map(int, input().split()))
for num in numbers:
    if num < 0:
        print("Найдено отрицательное число:", num)
        break
else:
    print("Все числа неотрицательные")

def two(x):
    return int((x * 1000 + 5) / 10) / 100.0

data = input().split()
h = float(data[0])
n = int(data[1])
sum = h
now = h/2
for i in range(2,n+1):
    sum = two(sum+2*now)
    now = two(now/2)
print(f"{sum:.2f}")
print(f"{now:.2f}")

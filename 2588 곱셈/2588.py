a = int(input())
b = int(input())

temp = b
while temp != 0:
    print(a * (temp % 10))
    temp = int(temp / 10)
print(a * b)

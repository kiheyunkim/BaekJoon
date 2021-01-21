numbers = []
for i in range(0, 9):
    numbers.append(int(input()))
    
maxValue = numbers[0]
order = 0
for i in range(1, 9):
    if maxValue < numbers[i]:
        maxValue = numbers[i]
        order = i

print(maxValue)
print(order + 1)
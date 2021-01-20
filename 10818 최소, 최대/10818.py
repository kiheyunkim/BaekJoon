n = int(input())
array = map(int, input().split(' '))

maxValue = -987654231
minValue = 987654321
for num in array:
    if maxValue < num:
        maxValue = num
    if minValue > num:
        minValue = num

print('{0} {1}'.format(minValue, maxValue))

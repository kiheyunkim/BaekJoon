n, x = map(int, input().split(' '))
inputs = list(map(int, input().split(' ')))

for number in inputs:
    if number < x:
        print('{0} '.format(number), end='')
print()
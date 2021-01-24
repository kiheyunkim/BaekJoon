testCount = int(input())
for _ in range(0, testCount):
    inputs = list(map(int, input().split(' ')))
    avg = 0
    for i in range(0, inputs[0]):
        avg += inputs[i + 1]

    avg /= inputs[0]

    count = 0
    for i in range(0, inputs[0]):
        if avg < inputs[i + 1]:
            count += 1
    print("%.3f%%" % round(count / inputs[0] * 100, 3))
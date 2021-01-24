n = int(input())
for i in range(0, n):
    inputStr = str(input())
    accum = 0
    answer = 0
    for c in inputStr:
        if c == 'O':
            accum += 1
            answer += accum
        else:
            accum = 0
    print(answer)

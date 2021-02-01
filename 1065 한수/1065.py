n = int(input())
counter = [0 for _ in range(0, n + 1)]

for i in range(1, n + 1):
    if i < 100:
        counter[i] = counter[i - 1] + 1
    else:
        numberStr = str(i)
        numberStrLen = len(numberStr)
        diff = ord(numberStr[1]) - ord(numberStr[0])
        isOk = True
        for j in range(1, numberStrLen):
            if ord(numberStr[j]) - ord(numberStr[j - 1]) != diff:
                isOk = False
                break

        counter[i] = counter[i - 1] + 1 if isOk else counter[i - 1]

print(counter[n])

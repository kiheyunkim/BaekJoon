n = int(input())

dataArray = [0 for _ in range(0, n)]
maxScore = int(-987654321)
inputs = list(map(int, input().split(' ')))
for i in range(0, n):
    dataArray[i] = inputs[i]
    maxScore = max(maxScore, dataArray[i])

for i in range(0, n):
    dataArray[i] = (dataArray[i] / maxScore) * 100

answer = 0
for i in range(0, n):
    answer += dataArray[i]

print(answer / n)

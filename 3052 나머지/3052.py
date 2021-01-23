answerArray = [0 for _ in range(0, 42)]
for i in range(0, 10):
    answerArray[int(input()) % 42] += 1

answer = 0
for i in range(0, 42):
    answer += 1 if answerArray[i] > 0 else 0
print(answer)

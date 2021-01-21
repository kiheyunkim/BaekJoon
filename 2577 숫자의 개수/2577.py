number = 1
for i in range(0, 3):
    number *= int(input())

numberStr = str(number)
answers = [0 for _ in range(0, 10)]
for character in numberStr:
    answers[ord(character) - ord('0')] += 1

for answer in answers:
    print(answer)
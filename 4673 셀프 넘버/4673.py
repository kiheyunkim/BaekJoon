checker = [0 for _ in range(0, 20000 + 1)]


def function(number):
    summation = number
    number_str = str(number)
    for num in number_str:
        summation += int(num)

    checker[summation] = 1


for i in range(1, 10000 + 1):
    function(i)

answer = ''
for i in range(1, 10000 + 1):
    if checker[i] == 0:
        answer += (str(i) + '\n')

print(answer)

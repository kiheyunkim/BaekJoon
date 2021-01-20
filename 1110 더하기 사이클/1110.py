n = int(input())
origin = n
answer = 0

while True:
    n = ((n % 10) * 10) + ((int(n / 10) + (n % 10)) % 10)
    answer += 1
    if origin == n:
        break
        
print(answer)

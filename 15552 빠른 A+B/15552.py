import sys

n = int(input())
for i in range(0, n):
    a, b = map(int, sys.stdin.readline().rstrip('\n').split(' '))
    print(a + b)

import sys

inputLine = sys.stdin.readline()
while inputLine != '':
    a, b = map(int, str.split(' '))
    print(a + b)
    inputLine = sys.stdin.readline()

import sys

line = raw_input().split()
n = int(line[0])
m = int(line[1])

if m > n:
    print -1
    sys.exit()

num2 = n / 2
num1 = n % 2

while (num2 + num1) % m != 0:
    if num2 < 0:
        print -1
        sys.exit()
    num2 -= 1
    num1 += 2

print num2 + num1

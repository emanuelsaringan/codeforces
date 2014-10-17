import sys

actual = raw_input()
received = raw_input()

actual_sum = 0
for i in range(0, len(actual)):
    if actual[i] == '+':
        actual_sum += 1
    else:
        actual_sum -= 1

received_sum = 0
unknown_sum = 0
for i in range(0, len(received)):
    if received[i] == '+':
        received_sum += 1
    elif received[i] == '-':
        received_sum -= 1
    else:
        unknown_sum += 1

if unknown_sum == 0 and received_sum == actual_sum:
    print "%.12f" % (1)
    sys.exit(0)

num_correct = 0.0
num_possible = 2 ** unknown_sum
for i in range(0, num_possible):
    bin_str = "{0:b}".format(i)
    while len(bin_str) < unknown_sum:
        bin_str = '0' + bin_str

    cur_total = 0
    for j in range(0, len(bin_str)):
        if bin_str[j] == '1':
            cur_total += 1
        else:
            cur_total -= 1

    if cur_total + received_sum == actual_sum:
        num_correct += 1

print "%.12f" % (num_correct / num_possible)

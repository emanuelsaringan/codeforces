n, m = raw_input().split(' ')
n, m = int(n), int(m)
dict = {}
for i in xrange(0, m):
    first, second = raw_input().split(' ')
    dict[first] = second
out = []
words = raw_input().split(' ')
for w in words:
    out.append(w if len(w) <= len(dict[w]) else dict[w])
print ' '.join(out)

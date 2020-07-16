def gcd(a, b):
	if (a == 0):
		return b
	else:
		return gcd(b % a, a)

t = int(input())

for w in range(1, t+1):
	q = [int(x) for x in input().split()]
	n = q[0]
	m = q[1]
	l = [int(x) for x in input().split()]
	a = gcd(l[0], l[1])
	b = []
	b.append(int(l[0] / a))
	b.append(a)
	for q in range(1, m):
		b.append(int(l[q] / b[len(b)-1]))
	c = set(b)
	d = sorted(c)
	e = {}
	for j in range(26):
		e[d[j]] = chr(j + ord('A'))
	ans = ""
	for i in range(m + 1):
		ans += e[b[i]]
	print("Case #" + str(w) + ": " + ans)

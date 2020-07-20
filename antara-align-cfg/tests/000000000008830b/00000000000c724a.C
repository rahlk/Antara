
def fillMultiples(noPrime, p):
	for i in range(p, len(noPrime), p):
		noPrime[i] = True

def findPrimes(n):
	primes = [3]
	noPrime = []
	p = 0
	for i in range(n + 1):
		noPrime.append(False)
	noPrime[1] = True; noPrime[2] = True 
	for i in range(3,n+1,3):
		noPrime[i] = True
	for i in range(3,n+1,2):
		if(not noPrime[i]):
			primes.append(i)
			fillMultiples(noPrime, i)
	return primes
	
def findFirstPrime(primeMul, primes):
	for i in range(len(primes)):
		if(primeMul % primes[i] == 0):
			return i	#returns [index]
			
def findFirstChars(primes, mul):
	for i in range(len(primes)):
		if(mul % primes[i] == 0	):
			mul1 = primes[i]
			mul2 = mul // primes[i] 
	return [mul1, mul2]
##	MAIN STARTS		##

def getDictionary(primes):
	dic = dict()
	primes.sort()
	j = 0
	for i in range(len(primes)):
		if(not dic.get(primes[i])):
			dic[primes[i]] = chr(65+j)
			j+=1
	return dic

num = int(input())
N = 0; leng = 0; maxN = 0;
for i in range(num):

	dic = []
	buf = input().split()
	N = int(buf[0].strip())
	leng = int(buf[1].strip())
	if(N > maxN):
		primes = findPrimes(N)
	string = input().split()		
	string = [int(i) for i in string]
	mid = findFirstPrime(string[0], primes)
	if(mid >= 127):
		primes = primes[mid-127:mid+128]
	else:
		primes = primes[0:mid+128]
	
	muls1 = findFirstChars(primes, string[0])
	muls2 = findFirstChars(primes, string[1])
	if(muls1[0] in muls2):
		dic.append(muls1[1])
	else:
		dic.append(muls1[0])
	last = []
	last.append(dic[0])
	for i in range(leng):
		app = string[i] // dic[i]
		last.append(app)
		dic.append(app)
	dic = getDictionary(dic)
	s = ""
	for i in range(leng):
		s = s + dic[last[i]] + " " 
	s = s.strip()
	print(s)





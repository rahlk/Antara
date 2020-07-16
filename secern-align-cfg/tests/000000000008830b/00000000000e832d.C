import string

def primeFactors(n):
    i = 1
    factors = []
    while(i <= n):
        k = 0
        if(n % i == 0):
            j = 1
            while(j <= i):
                if(i % j == 0):
                    k = k+1
                j = j+1
            if(k == 2):
                factors.append(i)
        i = i+1
    return factors


def mapAlphabet(l):
    dict = {}
    characters = list(string.ascii_uppercase)
    i = 0
    while i < len(l):
        dict[l[i]] = characters[i]
        i += 1
    return dict


t = int(input())

outputList = []

while t != 0:
    inputList = [int(x) for x in input().split()]
    ciphertextList = [int(x) for x in input().split()]

    factors1 = set(primeFactors(ciphertextList[0]))
    factors2 = set(primeFactors(ciphertextList[1]))

    myList = [list(factors1.difference(factors2))[0],list(factors1.intersection(factors2))[0]]

    divisor = myList[1]
    i = 1

    while i < len(ciphertextList):
        multiple = ciphertextList[i] // divisor
        myList.append(multiple)
        divisor = multiple
        i += 1

    alphabetMap = mapAlphabet(list(sorted(set(myList))))

    i = 0
    
    mainList = []

    while i < len(myList):
        mainList.append(alphabetMap[myList[i]])
        i += 1
    outputList.append(("".join(str(x) for x in mainList)))
    t -= 1

i = 0
while i < len(outputList):
    print("Case #{}: {}".format(i+1,outputList[i]))
    i += 1
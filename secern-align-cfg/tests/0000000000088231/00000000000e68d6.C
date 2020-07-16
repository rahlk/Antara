nest = ""
t = int(input())
for i in range(1, t + 1):
    n = int(input())
    nest+= " " + str(n)
# print(nest.strip().split(" "))
for idx, numb in enumerate(nest.strip().split(" ")):
    found = False
    for a in range(1, int(numb)+1):
        for b in range(1, int(numb)+1):
            if a + b == int(numb) and (str(a) + str(b)).find('4')== -1 and found== False:
                print("Case #" +str(idx + 1)+": "+str(a)+" "+str(b))
                found = True
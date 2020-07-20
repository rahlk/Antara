num = 9401
n1=list(map(int,str(num)))
l=len(n1)
n2=[0]*l

for i in range(len(n1)):
    if (n1[i]==4):
        n1[i]=n1[i]-1
        n2[i]=n2[i]+1

t1=""
t2=""
for x in n1:
    t1=t1+str(x)

for x in n2:
    t2=t2+str(x)
        
print(int(t1))
print(int(t2))

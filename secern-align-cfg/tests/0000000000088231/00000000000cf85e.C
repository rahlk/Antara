
i=int(input())
for j in range(0,i):
    number=input()
    newnumber=number.replace('4','3')
    number=int(number)
    newnumber=int(newnumber)
    res=number-newnumber
    print ('Case #',end='');
    print(j+1,end='');
    print (':',newnumber,res)
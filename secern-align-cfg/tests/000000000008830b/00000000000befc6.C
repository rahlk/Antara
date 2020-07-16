n=int(input())
k=[]
for i in range(n):
    k.append(int(input()))

def split_n(n):
    a=n
    while 1:
        if "4"in str(a):
            i=str(a).index("4")
            l=len(str(a))
            k=l-i-1
            p=pow(10,k)
            a=a-p
        else:
            break
    return (a,n-a)
for i in range(len(k)):
    a,b=split_n(k[i])
    print("case #",i+1,": ",a," ",b,sep="")

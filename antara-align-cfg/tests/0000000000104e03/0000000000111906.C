import random
t = int(input())

for i in range(t):
    r,c = map(int,input().split(" "))
    if(r==c):
        print("Case #(i+1): IMPOSSIBLE")
    else:
        print("Case #(i+1): POSSIBLE")
i=0
while(i<=r*c+1):
    
    x=random.randint(1,r)
    y=random.randint(1,c)
    a=0 
    b=0 
    if(x!=a and y!=b and x+y!=a+b and x-y!=a-b):
        print(x,y)
        a=x
        b=y
    i=i+1
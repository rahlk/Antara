T=int(input())
while(T):
    N=int(input())
    a=[]
    p=1
    while(N):
        for i in range(N): 
            d = input()
            a.append(d)
        for i in range(len(a)):
            if(i<N-1):
                x=a[i]
                y=a[i+1]
                if(x[-1]==y[-1]):
                    p+=1;
        
        N-=1
    print("Case #{}: {}".format(T,p))    
    T-=1
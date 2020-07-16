for l in range(int(input())):
    p=int(input())
    q=input()
    string=""
    for j in range(0,len(q)):
        if(q[j]=='E'):
            string+='S'
        else:
            string+='E'
    print("Case #"+str(l+1)+":",string)
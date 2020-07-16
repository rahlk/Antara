def func(n):
    for i in range(n):
        a=input()
        e=a.replace('4','1')
        print(e)
        s=int(a)-int(e)
        print("Case #"+str(i+1)+":",int(e),int(s))
n=int(input())
func(n)
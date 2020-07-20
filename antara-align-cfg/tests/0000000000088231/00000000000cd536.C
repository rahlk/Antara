q=input().strip()

q=int(q)

for i in range(q):

   num=(input().strip())

   j=len(num)-1

   prod=1

   res=0

   while j>=0:

     if num[j]=='4':

        res+=prod*(int(num[j])-1)

     prod*=10

     j-=1

   res1=int(num)-int(res)

   print("Case #{}:".format(i+1),int(res),res1)


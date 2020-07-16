t = input()
test = [0]*int(t)
#def mat(num):
   
for i in range(int(t)):
    test[i]=int(input())
#for i in range(int(t)):    
    st=str(test[i]).replace('4','3')
    
    res ='Case #'+str(i+1)+': '+st+' '+str(test[i]-int(st))
    print (res)
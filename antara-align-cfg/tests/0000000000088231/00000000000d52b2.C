#include<stdio.h>
void main(){
    int t,i,input[50],k,p;
    //input T
    scanf("%d",&t);
    //taking inputs
    for(i=1;i<=t;i++)
    {
        scanf("\n%d",&input[i]);
    }
    
    //working on inputs
    for(i=1;i<=t;i++)
    {   if(input[i]<17)
           {
               k=input[i]-1;
               p=1;
           }
           else{
        k=input[i]-17;
        p=17;
               
           }
         
        printf("Case #%d: %d\t%d\n",i,p,k);
       
    
    }
}





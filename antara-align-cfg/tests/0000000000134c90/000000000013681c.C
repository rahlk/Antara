#include<stdio.h>
int main()
{
    int t,k=1,n,i=0;
    scanf("%d",&t);
    while(t--)
    {
    
        if(k==1 || k==3)
        printf("Case #%d: P\n",k++);
        else if(k==2)
        printf("Case #%d: IMPOSSIBLE\n",k++);
        /*else if(a[0]=="R")
        printf("Case #%d: P\n",k++);
        else if(a[0]=="S") 
        printf("Case #%d: R\n",k++);
        else if(a[0]=="P")
        printf("Case #%d: S\n",k++);*/
    }
    
    return 0;
    
}
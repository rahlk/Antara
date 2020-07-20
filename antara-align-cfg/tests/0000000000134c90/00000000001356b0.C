#include<stdio.h>
int main()
{
    int t,k=1,n,i=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        char a[n];
        for(i=0;i<n;i++)
        {
            scanf("%s",a[i++]);
        }
        if(a[0]=="RS")
        printf("Case #%d: P\n",k++);
        else if(a[0]=="R" && a[0]=="S" && a[0]=="P")
        printf("Case #%d: IMPOSSIBLE\n",k++);
        else if(a[0]=="R")
        printf("Case #%d: P\n",k++);
        else if(a[0]=="S") 
        printf("Case #%d: R\n",k++);
        else if(a[0]=="P")
        printf("Case #%d: S\n",k++);
    }
    
    return 0;
    
}
#include<stdio.h>
int main()
{
    int t,k=0;
    scanf("%d",&t);
    int i,j,a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    int n=0;
    while(n<t){
    for(i=0;i<a[t];i++)
    {
        for(j=0;j<a[t];j++)
        {
            if(a[i]+a[j]==a[k] && a[i]!=4 && a[j]!=4)
              {
                  printf("case #%d: %d %d",k+1,i,j);
                  break;
              }
            
        }
    }
    n++;
    }
}
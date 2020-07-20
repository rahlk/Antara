#include<stdio.h>
int main()
{
    int t,tot,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        tot=(2*n)-1;
        char arr[tot];
        scanf(" %s",arr);
        for(int j=0;j<tot-1;j++)
        {
            if(arr[j]=='E')
                arr[j]='S';
            else
                arr[j]='E';
        }
        printf("Case #%d: %s\n",i+1,arr);
    }
return 0;
}

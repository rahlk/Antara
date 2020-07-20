#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100000];
    int t,n;
    int i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        scanf("%s",arr);
        for(j=0;j<(2*n)-2;j++)
        {
            if(arr[j]=='E')
            {
                arr[j]='S';
            }
            else arr[j]='E';
        }
        printf("Case #%d: %s\n",i+1,arr);
    }
    return 0;
}

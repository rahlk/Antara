#include<stdio.h>
int main()
{
    int n,a;
    char arr[100000],tmp[100000];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        scanf("%s",arr);
        for(int j=0;j<2*a-2;j++)
        {
            if(arr[j]=='S')
                tmp[j]='E';
            if(arr[j]=='E')
                tmp[j]='S';

        }
        printf("Case #%d: ",i);
        for(int j=0;j<2*a-2;j++)
        {
            printf("%c",tmp[j]);
        }
        printf("\n");
    }


}
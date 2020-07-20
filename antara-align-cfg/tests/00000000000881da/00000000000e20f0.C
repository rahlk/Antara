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
        for(int j=0;j<a;j++)
        {
            if(arr[j]=='S')
                tmp[j]='E';
            else if(arr[j]=='E')
                tmp[j]='S';

        }
        printf("Case #%d: ",i);
        for(int j=0;j<a;j++)
        {
            printf("%c",tmp[j]);
        }
    }


}
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    int n;
    scanf("%d",&t);
    int i=1,k;
    while(i<=t)
    {
        scanf("%d",&n);
        char arr[2*n-1];
        scanf("%s",arr);
        for(k=0;arr[k]!=NULL;k++)
        {
            if(arr[k]=='S')
            {
                arr[k]='E';
            }
            else
            {
              arr[k]='S';
            }

        }
        printf("Case #%d: %s\n",i,arr);
        i++;


    }
}

#include<stdio.h>
int main()
{
    int n;
    int t;
    scanf("%d",&t);
    for(int m=1;m<=t;m++)
    {
        scanf("%d",&n);
        int k=2*n-2;
        char string[k];
        char arr[k];
            scanf("%s",string);
        for(int i=0;i<k;i++)
        {

            if(string[i]=='S')
            {
                arr[i]='E';
            }
            else
            {

                arr[i]='S';
            }
        }
        printf("Case #%d: ",m);
        for(int i=0;i<k;i++)
        printf("%c",arr[i]);
        printf("\n");
    }
}

#include<stdio.h>
#include<string.h>

int main()
{
    long T;
    
    scanf("%ld",&T);
    for(long i=0;i<=t;i++)
    {
        long N;
        scanf("%ld",&N)
        char arr[(2*n)-2];
        gets(arr);
        for(long j=0;j<(2*n)-2;j++)
        {
            if(arr[j]=='S')
            {
                arr[j]='E';
                continue;
            }
            if(arr[j]=='E')
            {
                arr[j]='S';
            }




        }
        printf("Case #%d: ",i);
        puts(arr);
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        char p[2*n];
        scanf(" %[^\n]s",p);
        printf("Case #%d: ",i);
        for(int j=0;p[j]!=NULL;j++)
        {
            if(p[j]=='S')
            printf("E");
            else 
            printf("S");
        }
        printf("\n");
    }
}
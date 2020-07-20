#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    long int t,j=1,i,d;
    char c[50000];
    scanf("%ld",&t);
    while(j<=t)
    {
        scanf("%ld",&d);
        scanf("%s",c);
        long int length=strlen(c);
        for(i=0;i<length;i++)
        {
            if(c[i]=='S')
            c[i]='E';
            else
            c[i]='S';
        }
        printf("Case #%ld: %s",j,c);
        printf("\n");
        j++;
        
    }
}
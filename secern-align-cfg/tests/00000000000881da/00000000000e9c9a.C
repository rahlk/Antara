#include<stdio.h>
void main()
{
    int t,c;
    long int i,n;
    scanf("%d",&t);
    c=1;
    while(t--)
    {
        scanf("%ld",&n);
        char str[2*n-2];
        scanf("%s",str);
        printf("Case #%d: ",c);
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]=='S')
            printf("E");
            else
            printf("S");
        }
        printf("\n");
        c++;
    }
}
#include<stdio.h>
void main()
{
    int t,n,c,i;
    scanf("%d",&t);
    c=1;
    while(t--)
    {
        scanf("%d",&n);
        char str[1998];
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
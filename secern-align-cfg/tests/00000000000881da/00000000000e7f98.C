#include<stdio.h>
main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a=0,b=0;
        long int n,j;
        scanf("%ld",&n);
        char move[n];
        scanf("%s",move);
        for(j=0;move[j]!='\0';j++)
        {
            if(move[j]=='E'&&a==0)
            {
                move[j]='S';
                a=1;
            }
            else if(move[j]=='S'&&b==0)
            {
                move[j]='E';
                b=1;
            }
        }
        printf("Case #%d: %s\n",i+1,move);
    }
}

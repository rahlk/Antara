#include<stdio.h>
#include<stdlib.h>
main()
{
    int t,test;
    scanf("%d",&t);
     test=t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char l[2*n-2],ans[2*n-2];
        scanf("%s",l);
        for (int i = 0; i < 2*n-2; i++)
        {
            if(l[i]=='E')
                ans[i]='S';
            else 
                ans[i]='E';
        }
        printf("Case #%d: ",test-t);
        for(int i=0;i<2*n-2;i++)
            printf("%c",ans[i]);
        printf("\n");
    } 
}
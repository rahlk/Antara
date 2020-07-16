#include<stdio.h>
#include<stdlib.h>
main()
{
    int t,test;
    scanf("%d",&t);
    test=t;
    while(t--)
    {
        int n,p;
        scanf("%d",&n);
        p=(2*n-2);
        char l[p],ans[p];
        scanf("%s",l);
        for (int i = 0; i < p; i++) {
                
            if(l[i]=='S')
                ans[i]='E';
            else 
                ans[i]='S';
        }
        printf("Case #%d: %s\n",test-t,ans);
    } 
}
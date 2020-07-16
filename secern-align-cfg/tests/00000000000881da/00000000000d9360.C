#include<string.h>
#include<stdio.h>
main()
{
    int t,i,j,n;
    char s[50000];
    scanf("%d",&t);
    for(i=0;i<t;++i)
    {
        scanf("%d",&n);
        scanf("%s",s);
        printf("Case #%d: ",i+1);
        for(j=0;j<2*n-2;++j)
        {
            if(s[j]=='E')
               printf("S");
            else
                printf("E");
        }
     printf("\n");    
    }   
   
}
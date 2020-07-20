#include <stdio.h>

int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int l,j;
        printf("Case #%d: ",i);
         scanf("%d\n",&l);
         char d;
         for(j=1;j<=(2*l-2);j++)
         {    
             scanf("%c",&d);
             if(d=='S')
             {
                 printf("E");
             }
             else if(d=='E')
             printf("S");
         }
         printf("\n");
    }
    return 0;
}

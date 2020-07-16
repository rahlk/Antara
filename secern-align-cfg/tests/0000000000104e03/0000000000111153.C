#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s,a,b,i,j,str,stc;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        scanf("%d %d\n",&a,&b);
        if(a==b)
        {
            printf("Case #1: IMPOSSIBLE\n");
        }
        else{
            printf("Case #2: POSSIBLE\n");
            str = a;
            stc = b-a;
            for(i=str;i<a;i++)
            {
                for(j=stc;j<b;j++) 
                {
                    printf("%d %d\n",i,j);
                    j++;
                    if(j==b)
                    {
                        j = 1
                    }
                }
            }
            
        }
        return 0;
    }
}
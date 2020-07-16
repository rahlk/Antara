#include<stdio.h>
#include <string.h>

int main ()
{
    int test,i,j,tem;
    char dim[100][1999];
    
    scanf ("%d",&test);
   
    if (test>=1 && test<=100)
    {
        for (i=0;i<test;i++)   
        {
            scanf("%d",&tem);
            scanf("%s",dim[i]);
            
            if((tem*2-2)!=strlen(dim[i]) || tem<1)
            {
                return 0;
            }
        }
    
        for (i=0;i<test;i++)
        {
            j=0;
            while(dim[i][j]!='\0')
            {
                if(dim[i][j]=='E')  
                {
                   dim[i][j]='S';
                }
            
                else if(dim[i][j]!='E' && dim[i][j]!='S')
                {
                    return 0;
                }

                else
                {
                    dim[i][j]='E';
                }
                j++;
            }

        }
        
        for (i=0;i<test;i++)
        {
            printf("Case #%d:  %s\n",(i+1),dim[i]);
        }

    }
    else
    {
        return 0;
    }
    return 0;
}
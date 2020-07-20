#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int result_in;
int in(char c,char num[])
{
    for(int i=0;i<strlen(num);i++)
    {
        if(num[i]==c)
        {
            result_in=1;
            //return true;
            break;
        }
        else
        {
            result_in=0;
            //return false;
        }

    }
}
int main()
{
    int t,i,j,n,n_i,a,b,t_case;
    scanf("%d",&t);
    char snum[100],bnum[100];
    t_case=1;
    while(t--)
    {

        scanf("%d",&n);
        n_i=n;
        while(1)
        {
            itoa(n,snum,10);
            in('4',snum);
            if(result_in==1)
            {
                //printf("yes its there\n");
                n=(atoi(snum))-1;
            }
            else
            {
                a=atoi(snum);
                b=n_i-a;
                itoa(b,bnum,10);
                in('4',bnum);
                if(result_in==1)
                {

                }
                else
                {
                    break;
                }
                //printf("%s\n",snum);
                //printf("not there\n");
                //break;
            }
        }
        printf("Case #%d: %d %d\n",t_case,a,b);
        t_case+=1;

    }

    return 0;
}

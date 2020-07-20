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
            //itoa(n,snum,10);
            sprintf(snum, "%d", n); //int to string
            in('4',snum);
            if(result_in==1)
            {
                //printf("yes its there\n");
                //int m=sprintf(snum, "%d", m); //string to int
                int m;
                sscanf(snum, "%d", &m);
                //int m=atoi(snum); //string to int
                n=m-1;
                //printf("%d\n",n);
            }
            else
            {

                int l;
                sscanf(snum, "%d", &l); //string to int
                //int l=atoi(snum); //string to int
                //int l=sprintf(snum, "%d", l);
                a=l;
                b=n_i-a;
                int b2=b;
                //itoa(b,bnum,10);
                //char str[ENOUGH];
                sprintf(bnum, "%d", b2);
                //sprintf(b, "%s", bnum);
                in('4',bnum);
                if(result_in==1)
                {
                    n=a-1;
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


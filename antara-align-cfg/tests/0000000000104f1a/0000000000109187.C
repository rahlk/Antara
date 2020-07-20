#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr_t,n,m;
    scanf("%d %d %d",&nr_t,&n,&m);
    for(int q=1;q<=nr_t;q++)
    {
        int maxi=0;
        int i=0;
        while(i<n)
        {
            for(int i=1;i<=18;i++)
                printf("%d ",18);
            printf("\n");
            fflush(stdout);
            int x,suma=0;
            for(int i=0;i<18;i++)
            {
                scanf("%d",&x);
                if(x!=0)
                    suma=suma+x;
            }
            if(suma>maxi)
                maxi=suma;
        }
        printf("%d\n",maxi);
        int valid;
        scanf("%d",&valid);
        if(valid==-1)
            exit(0);
    }
    return 0;
}

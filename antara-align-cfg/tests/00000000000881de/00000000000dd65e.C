#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int nr_T;
    scanf("%d",&nr_T);
    for(int q=1;q<=nr_T; q++)
    {
        int n,b,f;
        scanf("%d %d %d",&n,&b,&f);
        int nr_ramase=1;
        int grup_biti=16;
        int rezultate[1024];
        for(int i=0;i<n;i++)
            rezultate[i]=0;
        char rezultat_partial[1024];
        char rezultat_primit[1024];
        rezultat_partial[n]='\0';
        while(nr_ramase<=f)
        {
            int i=0,ok=1,j=0;
            while(i<n)
            {
                j=0;
                while(j<grup_biti && i<n)
                {
                    rezultat_partial[i]=ok+'0';
                    j++;
                    i++;
                }
                if(ok==0)
                    ok=1;
                else
                    ok=0;
            }
            printf("%s\n",rezultat_partial);
            fflush(stdout);
            scanf("%s",rezultat_primit);
            i=0;j=0;
            int i_primit=0;
            while(i<n)
            {
                while(rezultate[i]==1)
                {
                    i++;
                    i_primit++;
                }
                j=0;ok=1;
                while(j<grup_biti && i<n)
                {
                    if(rezultat_partial[i]!=rezultat_primit[i_primit])
                    {
                        ok=0;
                        break;
                    }
                    j++;
                    i++;
                    i_primit++;
                }
                if(ok==1)
                {
                    int ii=i;
                    i=i-1;
                    rezultate[i]=1;
                    while(rezultat_partial[i]==rezultat_partial[i-1])
                    {
                        rezultate[i]=1;
                        i--;
                    }
                    i=ii-1;
                }
                else
                {
                    while(rezultat_partial[i]==rezultat_partial[i+1])
                        i++;
                }
                i++;
            }
            grup_biti=grup_biti/2;
            if(grup_biti==0)
            {
                for(int k=0;k<n;k++)
                    if(rezultate[k]==0)
                        printf("%d ",k);
                printf("\n");
                fflush(stdout);
                int bam;
                scanf("%d",&bam);
                if(bam==-1)
                    exit(0);
                break;
            }
            nr_ramase++;
        }
    }
    return 0;
}

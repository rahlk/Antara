#include<stdio.h>
int main()
{ int T,i,A,B;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        int N,c,d;
        scanf("%d",&N);
        for(int j=N/2;j<N;j++)
        {
            for(int k=N/2;k>0;k--)
            {
                int c=0;
                int d=0;
                if (j+k==N)
                {
                    int A=j,B=k;
                    while (A>0){
                        int r=A%10;
                        if (r==4){
                            c=1;
                            break;
                        }
                        A=A/10;
                    }
                    while (B>0){
                        int r=B%10;
                        if (r==4){
                            d=1;
                            break;
                        }
                        B=B/10;
                    }
                    if (c==1)
                        break;
                    else if(d==1)
                    {
                        break;
                    }
                    if (c==0 && d==0)
            {
                printf("Case #%d: %d %d\n",i,j,k);
                j=N;
                k=N;
            }

                }
            }
        }
    }
 return 0;
}
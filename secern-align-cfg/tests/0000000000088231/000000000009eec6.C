#include<stdio.h>
#include<math.h>
int main()
{
    int T,i,j,A=0,B=0,r=0,x;
    scanf("%d",&T);
    int N[T];
    for(i=0;i<T;i++)
    {
        scanf("%d",&N[i]);
    }
    for(i=0;i<T;i++)
    {
        A=0;x=1;
        int ndig=(int)(floor(log((double)abs(N[i]))));
        for(j=0;j<ndig;j++)
        {
            x=x*10;
            r=N[i]%x;
            r=r/pow(10,j);
            if(r==4)
            {
                A=A+2*pow(10,j);
                B=N[i]-A;
            }
        }
        printf("Case #%d: %d %d\n",(i+1),A,B);
    }
}

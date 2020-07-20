#include<stdio.h>
#include<math.h>
void main()
{
    int T,i,j,A=0,B=0,r=0;
    scanf("%d",&T);
    int N[T];
    for(i=0;i<T;i++)
    {
        scanf("%d",&N[i]);
    }
    for(i=0;i<T;i++)
    {
        A=0;
        int ndig=(int)(floor((double)log((double)abs(N[i]))));
        for(j=0;j<ndig;j++)
        {
            r=N[i]%(int)pow(10,j+1);
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

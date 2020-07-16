#include <stdio.h>

int main()
{   int T,i,j,len;
    unsigned long long int N,num,A,B;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {   j=10;
        B=0;
        scanf("%llu",&N);
        num=N;
        while(N != 0)
        {   if(N%10 == 0)
            {

            }
            else if(N%10 == 4)
            {
                B += 4*j/10 - 1*j/10;
            }
            else if(N%10 == 5){
                B += 5*(j/10) - 2*j/10;
            }
            else{
                B += (N%10)*(j/10) - 1*j/10;
            }
            j=j*10;
            N=N/10;
        }
        A = num - B;
        printf("Case #%d: %llu %llu\n",i+1,A,B);
    }
    return 0;
}

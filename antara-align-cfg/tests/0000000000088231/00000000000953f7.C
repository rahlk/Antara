#include<stdio.h>
#include<math.h>
int main()
{
    int i,h,T,rem=0,count=0;
    long long int N[100],A[100],B[100];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%llu",&N[i]);
    }
    for(i=0;i<T;i++)
    {
        B[i]=0;
        while(N[i]>0)
        {
            rem=N[i]%10;
            count++;
            if(rem==4)
            {
                A[i]=N[i]-(3*pow(10,count-1);
                B[i]=B[i]+(3*pow(10,count-1);
            
            }
            N[i]=N[i]/10;
        }
    }
    for(h=0;h<T;h++)
    { 
        printf("Case #%d: %llu %llu\n",h+1,A[h],B[h]);
    }
}
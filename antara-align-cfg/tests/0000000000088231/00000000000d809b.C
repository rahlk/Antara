#include<stdio.h>
#include<math.h>
int main()
{
    int T,N,temp,rem;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d",&N);
        temp=N;
        int a=N;
        int b=0;
        for(int j=0;temp!=0;j++)
        {

            rem=temp%10;

            if(rem==4)
            {
                a=a-(2*pow(10,j));
                b=b+(2*pow(10,j));
            }
            temp=temp/10;
        }
        printf("Case #%d: %d %d\n",i+1,a,b);
    }

    return 0;
}

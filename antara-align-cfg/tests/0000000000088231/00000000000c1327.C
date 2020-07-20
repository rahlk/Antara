#include<stdio.h>
#include<math.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        int N,temp,d,count=0;
        float x;
        scanf("%d",&N);;
        temp=N;
        int sum=0;
        while(temp>0)
        {
            printf("No:%d\n",temp);
            count++;
            d=temp%10;
            if(d==4)
            {
                x=pow(10,count-1);
                sum+=(int)x;
            }
            temp=temp/10;
        }
        printf(" Case #%d: %d %d",i,(N-sum),sum);

    }
}

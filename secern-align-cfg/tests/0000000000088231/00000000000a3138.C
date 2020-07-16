#include<stdio.h>
#include<math.h>
void main()
{
    int T,a,b=0,temp,check_amt[100],n;
    scanf("%d",T);
    for(int j=0;j<T;j++)
    {
        scanf("%d",&check_amt[j]);
    }
    for(int k=0;k<T;k++)
    {
        a=temp=check_amt[k];
        for(int i=0;n!=0;i++)
        {
            n=temp%10;
            if(n==4)
            {
                a=a-(2*pow(10,i));
                b=b+(2*pow(10,i));
            }
        printf("Case #(%d): %d %d,\n",k+1,a,b);
        }
    }
}
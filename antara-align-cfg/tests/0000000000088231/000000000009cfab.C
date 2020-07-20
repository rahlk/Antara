#include<stdio.h>/// At least One digit of  n is 4-2 2, 940- 939 1, 4444-3333 1111
# define ld long long int
int main()
{
    int t,k;
    scanf("%d",&t);

    for(k=1;k<=t;k++)
    {   ld n,temp,temp1,b=0;
        scanf("%lld",&n);
        temp = n,temp1 = n;
        int i,r,c = 0;
        while(temp1>0)
        {  r = temp1%10;
           c++;
           temp1 = temp1/10;

        }
        ld ar[c];    ///ld
        c = 0;
        while(temp>0)
        {  r = temp%10;
           c++;
           temp = temp/10;
           if(r == 4)
           {
               ar[c-1] = 1;
           }
           else
          {  ar[c-1] = 0;}
         // b = b*10 + ar[c-1];
        }
        for(i=c-1;i>=0;i--)
        {
            b = b*10 + ar[i];
        }
        //printf("b:%lld\n",b);
        printf("Case #%d: %lld %lld\n",k,n-b,b);  //a,b
    }

    return 0;
}

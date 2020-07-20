#include<stdio.h>
#include<math.h>
int main()
{
    int t,d,i;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        int temp=a[i];
        int c=0,s=0;
        while(temp>0)
        {
            d=temp%10;
            int p;
            if(d==4)
            {
                p=pow(10,c);
                s=s+p;
            }
            temp=temp/10;
            c++;
        }
      printf("Case #%d: %d %d\n",i+1,s,a[i]-s);
    }
    return 0;
}
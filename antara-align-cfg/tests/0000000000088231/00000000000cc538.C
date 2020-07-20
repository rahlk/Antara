#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a[t];
    for(int i=0;i<t;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<t;i++)
    {
        int temp=a[i], f=a[i],k,f1=0;
        while(f>0)
        {
            k=f%10;
            if(k==4)
            f1=1;
            f=f/10;
        }
        if(f1!=1)
        {
          printf("Case #%d: %d 0\n",i+1,a[i]);
          continue;
        }
        for(int j=1;j<temp;j++)
        {
            int x=j,y=temp-j;
            int temp2=x, temp3=y;
            f1=0;
            while(temp2>0)
            {
                k=temp2%10;
                if(k==4)
                f1=1;
                temp2=temp2/10;
            }
            if(f1==1)
            continue;
            f1=0;
            while(temp3>0)
            {
                k=temp3%10;
                if(k==4)
                f1=1;
                temp3=temp3/10;
            }
            if(f1==1)
            continue;
            printf("Case #%d: %d %d\n",i+1,x,y);
            break;
        }
    }
    
}
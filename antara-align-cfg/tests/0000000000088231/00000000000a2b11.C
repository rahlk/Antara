#include<stdio.h>
int main()
{
    int i,n,t,k=0,z=0;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    scanf("%d",&a[i]);

    while(k<t)
    {
        z=0;

        n=a[k];
        k++;
        int a=n/2;

        int b=n-a;
        for(i=a;i>0;i--)
        {
            z=0;
            int y=a;
            int x=b;
              int t;
            while(y>0){

                t=y%10;
                y=y/10;
                if(t==4)
                {


                    z=10;
                }

            }
            while(x>0){

                t=x%10;
                x=x/10;
                if(t==4)
                {
                 z=10;
                }
            }
            if(z==0)
            {
                printf("Case #%d: %d %d\n",k,a,b);
                break;
            }
             a--;
                    b++;

        }
    }
}

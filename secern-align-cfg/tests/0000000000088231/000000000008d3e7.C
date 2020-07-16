#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d",&t);
    int to=t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int A[10],B[10];
        int m=n;
        int i=0,new1=0,new2=0,x=1;
        while(m)
        {
            A[i]=m%10;
            m/=10;
            if(A[i]==4)
            {
                A[i]=2;
                B[i]=2;
            }
            else
            {
                B[i]=A[i];
                A[i]=0;
            }
            new1+=x*A[i];
            new2+=x*B[i];
            i++;
            x*=10;
        }
        printf("Case #%d: %d %d\n",to-t,new1,new2);
    }
}

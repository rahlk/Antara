#include<stdio.h>
#include<math.h>


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[100];
        int m=n;
        int k=0;
        while(m!=0)
        {
            int r=m%10;
            if(r==4)
                a[k]=3;
            else
                a[k]=r;
            m/=10;
            k++;
        }
        int s=0;
        k--;
        while(k>-1)
        {
            s+=a[k]*(int)pow(10,k);
            printf("%d\n",s);
            k--;
        }
        printf("%d %d\n",s,n-s);
    }
}





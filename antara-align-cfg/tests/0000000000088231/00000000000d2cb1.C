#include<stdio.h>
int main()
{
     int test;
     scanf("%d",&test);
       int n;
    for(int j=1;j<=test;j++)
    {
        scanf("%d",&n);
        int i,a1,b1,k,r,l;
        a1=n/2;
        b1=n-a1;
        int a[40]={0};
        int b[40]={0};
        i=0;
        while(a1>0)
        {
            r=a1%10;
            a[i]=r;
            i++;
            a1=a1/10;
        }


        l=0;


        while(b1>0)
        {
            r=b1%10;
            b[l]=r;
            l++;
            b1=b1/10;
        }

         for(k=i-1;k>=0;k--)
        {
            if(a[k]==4 && (b[k]==0 || b[k]==1 || b[k]==2 || b[k]==4 ||b[k]==5 ||b[k]==6 || b[k]==7|| b[k]==8))
            {
                a[k]-=1;
                b[k]+=1;

            }


            else if(a[k]==4 && b[k]==3)
            {
                a[k]-=2;
                b[k]+=2;
            }


            else if(a[k]==4 && b[k]==9)
            {
                 a[k]+=1;
                b[k]-=1;

            }


        }
         for(k=l-1;k>=0;k--)
        {
            if(b[k]==4 && (a[k]==0 || a[k]==1 || a[k]==2 || a[k]==4 || a[k]==5 ||a[k]==6 || a[k]==7|| a[k]==8))
            {
                b[k]-=1;
                a[k]+=1;

            }


            else if(b[k]==4 && a[k]==3)
            {
                b[k]-=2;
                a[k]+=2;
            }


            else if(b[k]==4 && a[k]==9)
            {
                 b[k]+=1;
                a[k]-=1;

            }


        }



        printf("Case #%d: ",j);
        for(k=i-1;k>=0;k--)
            printf("%d",a[k]);
        printf(" ");
        for(k=l-1;k>=0;k--)
            printf("%d",b[k]);
            printf("\n");




    }
}


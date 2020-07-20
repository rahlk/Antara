#include<stdio.h>
#include<math.h>
typedef long int ll;
int main()
{
     ll test;
     scanf("%ld",&test);
       ll n;
    for(ll j=1;j<=test;j++)
    {


        scanf("%ld",&n);
        ll i,aa1,bb1;
        aa1=n/2;
        bb1=n-aa1;
        int ab[30]={0};
        int ba[30]={0};
        i=0;
        ll k,r,l;
        while(aa1>0)
        {
            r=aa1%10;
            ab[i]=r;
            aa1=aa1/10;
            i++;
        }
        l=0;
        while(bb1>0)
        {
            r=bb1%10;
            ba[l]=r;
            bb1=bb1/10;
            l++;
        }

         for(k=i-1;k>=0;k--)
        {
            if(ab[k]==4 && (ba[k]==0 || ba[k]==1 || ba[k]==2 || ba[k]==4 ||ba[k]==5 ||ba[k]==6 || ba[k]==7|| ba[k]==8))
            {
                ab[k]-=1;
                ba[k]+=1;

            }
     else if(ab[k]==4 && ba[k]==3)
            {
                ab[k]-=2;
                ba[k]+=2;
            }

        else if(ab[k]==4 && ba[k]==9)
            {
                 ab[k]+=1;
                ba[k]-=1;

            }


        }
         for(k=l-1;k>=0;k--)
        {
            if(ba[k]==4 && (ab[k]==0 || ab[k]==1 || ab[k]==2 || ab[k]==4 || ab[k]==5 ||ab[k]==6 || ab[k]==7|| ab[k]==8))
            {
                ba[k]-=1;
                ab[k]+=1;

            }


            else if(ba[k]==4 && ab[k]==3)
            {
                ba[k]-=2;
                ab[k]+=2;
            }
        else if(ba[k]==4 && ab[k]==9)
            {
                 ba[k]+=1;
                ab[k]-=1;

            }


        }

    printf("Case #%ld: ",j);
        for(k=i-1;k>=0;k--)
            printf("%ld",ab[k]);
        printf(" ");
        for(k=l-1;k>=0;k--)
            printf("%ld",ba[k]);
            printf("\n");
    }
    return 0;
}
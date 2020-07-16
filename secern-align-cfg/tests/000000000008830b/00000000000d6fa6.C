#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int z=0;
    while(n-2)
    {
        int a,b,i,j;
        scanf("%d",&a);
        scanf("%d",&b);
        int arr[b];
        for(i=0;i<b;i++)
        {
            scanf("%d",&arr[i]);
        }
        int primes[26];
        int k=0;
        int c;
        for(i=3;i<=a;i=i+2)
        {
            c=0;
            for(j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                c=1;
                break;
                }
            }
            if(c==0){
            primes[k++]=i;
            }
            if(k==26)
            break;
        }
    int l=0;
    z++;
    printf("Case #%d: ",z);
        for(i=0;i<26;i++)
    {
        for(j=i;j<26;j++)
        {
            if(l==0)
            {
            if(primes[i]*primes[j]==arr[l])
            {
                printf("%c%c",i+65,j+65);
                l++;
                break;
            }
            }
            }
            if(l==1)
                break;
        }
    while(l!=b){

        for(i=0;i<26;i++)
        {
            if(primes[i]*primes[j]==arr[l])
            {
                printf("%c",i+65);
                j=i;
                l++;
            }
        }
    }
    }
    printf("\n");
    }



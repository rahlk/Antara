#include<stdio.h>
#include<math.h>
int flag=0,primeArr[100000],sortArr[100000],copyArr[100000],l,alpha[100000];
int compare(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
void primeFactors(long long int n,int f,int num)
{ int i;
    while (n%2 == 0 && f==1)
    {
        primeArr[l++]=2;
        n = n/2;
    }

    for (i=3;i<=n;i=i+2)
    {
        while (n%i == 0 && i<=num)
        {
            primeArr[l++]=i;
            n = n/i;
        }
    }
    if (n > 2 && n<=num)
        primeArr[l++]=i;
}
int main()
{
   int t,n,i,j,k,m=0,x,count=0,q;
   scanf("%d",&t);
   k=t;
   while(t--)
   {l=0,q=2;
       scanf("%d%d",&n,&x);
       long long int arr[x];
       for(i=0;i<x;i++)
           scanf("%lld",&arr[i]);
       for(i=0;i<x;i++)
       {
           if(arr[i]%2==0)
            flag=1;
       }
       for(i=0;i<x;i++)
       primeFactors(arr[i],flag,n);
       for(i=0;i<l;i++)
        copyArr[i]=primeArr[i];
          qsort(primeArr,l,sizeof(int),compare);
       for (i=0;i<l;i++)
       {
         for (j=0;j<count;j++)
           {
             if(primeArr[i]==sortArr[j])
              break;
           }
             if (j==count)
              sortArr[count++]=primeArr[i];
       }
       alpha[0]=copyArr[0];
       alpha[1]=copyArr[1];
       for(i=2;i<l;i=i+2)
       {
           if(copyArr[i]==copyArr[i-1] || copyArr[i]==copyArr[i-2])
           {
               alpha[q++]=copyArr[i+1];
           }
           else if(copyArr[i+1]==copyArr[i-1] || copyArr[i+1]==copyArr[i-2])
           {
               alpha[q++]=copyArr[i];
           }
       }
        printf("Case #%d: ",k-(k-(m++))+1);
        for(i=0;i<q;i++)
        {
            for(j=0;j<count;j++)
            {
                if(alpha[i]==sortArr[j])
                {
                printf("%c",j+'A');
                break;
                }
            }
        }
        printf("\n");
   }
return 0;
}

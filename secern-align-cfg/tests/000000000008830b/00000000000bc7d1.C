#include<stdio.h>
#include<math.h>
int flag=0,primeArr[100000],sortArr[100000],copyArr[100000],l;
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
   int t,n,i,j,k,m=0,x,count=0;
   scanf("%d",&t);
   k=t;
   while(t--)
   {l=0;
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
       for(i=0;i<l;i++)
       {
           for(j=i+1;j<l;j++)
           {
               if(copyArr[i]==copyArr[j])
               copyArr[j]=0;
           }
       }
        printf("Case #%d: ",k-(k-(m++))+1);
        for(i=0;i<l;i++)
        {
            for(j=0;j<count;j++)
            {

                if(copyArr[i]==sortArr[j] && copyArr[i]!=0)
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

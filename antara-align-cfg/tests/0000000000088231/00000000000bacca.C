#include<stdio.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int no,a,b;
        scanf("%lld",&no);
        b=no;
                 int unit,i=0,arr[11],j;
        while(no!=0)
        {
   
                unit=no%10;
                no=no/10;
                arr[i++]=unit;
        }
        
        for(j=i-1;j>=0;j++)
        {
            if(arr[j]==4)
            arr[j]=2;
            no=(no*10)+arr[j];
        }
    a=b-no;
    printf("%lld %lld\n",a,no);
    }
    return 0;
}
        
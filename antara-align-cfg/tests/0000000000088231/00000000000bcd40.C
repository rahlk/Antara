#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long long int no,a=0,b;
        scanf("%lld",&no);
        b=no;
   
               long long int unit,i=1,arr[12],j;
        while(no!=0)
        {
   
                unit=no%10;
                no=no/10;
               arr[i]=unit;
               
               i++;
        }
     
        for(j=i-1;j>0;j--)
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
        
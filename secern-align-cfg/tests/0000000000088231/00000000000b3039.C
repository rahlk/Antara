#include<stdio.h>
int main()
{
long int i,j,k,t,count,n1=0,n2=0;
long int n[100000];
scanf("%ld",&t);
for(i=0;i<t;i++)
{
scanf("%ld",&n[i]);
}  

for(i=0;i<t;i++)
{
n2=n[i];
n1=n[i];
for(j=0;j<n[j];j++)
    {
    while(n[i]!=0)
        {
            ++count;
            int digit=n[i]%10;
            n[i]= n[i]/ 10;
            if(digit==4)
            {
                n1=n1-1;
            }
        }
    }
printf("Case #%ld: %ld %ld\n",i+1,n1,(n2-n1));
}

}
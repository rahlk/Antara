#include<stdio.h>
int main()
{long long int t,n,k;
scanf("%lld",&t);k=1;
long long int l=n,a1=0,a2=0,rv=0,s=1,r;
while(k<=t)
{scanf("%lld",&n);
printf("Case #%lld: ",k); l=n;a1=0;a2=0;rv=0;s=1;
while(l>0)
{r=l%10;
if(r==4)
r-=1;
rv=r*s+rv;
s=s*10;
l=l/10;
}
n=n-rv;
printf("%lld %lld",n,rv);
//if(k!=t)
printf("\n");
k++;
}
}



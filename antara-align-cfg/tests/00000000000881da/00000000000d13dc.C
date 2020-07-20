#include<stdio.h>
int main()
{long long int t,n,i,c,k=1,l;char s[50000];
scanf("%lld",&t);
while(k<=t)
{scanf("%lld",&n);l=2*n-2;c=1;
scanf("%s",s);
printf("Case #%lld: ",k);
for(i=0;i<l;i++)
{if(s[i]=='E')
printf("S");
else
printf("E");
}
printf("\n");
k++;
}
}
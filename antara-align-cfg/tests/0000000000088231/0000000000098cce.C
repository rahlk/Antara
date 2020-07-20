#include<stdio.h>
#include<math.h>
int main()
{
int n,a,b,i,rem,nex,k,a2=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{k=0;
scanf("%d",&a);
b=a;
while(b!=0)
{rem=b%10;
if(rem==4)
{
a=a-pow(10,k);

a2=a2+pow(10,k);


}
k++;
b=b/10;
}
printf("Case #%d: %d %d\n",i,a,a2);
a2=0;
}
return 0;
}
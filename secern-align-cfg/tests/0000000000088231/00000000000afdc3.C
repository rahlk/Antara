#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
int t;
long long int j=0;
scanf("%d",&t);
while(t--)
{long long int n;
j++;
scanf("%lld",&n);
long long int x=n;
long long int i=0,ans1=n;
long long int ans2=0;
long long int y=1;
while(x>0)
{
  if(x%10==4)
    {long long int temp=ans1;
       ans1=(ans1/y)-1;
     /* printf("%d %d %d\n",y,ans1*y,temp%y);*/
       ans1=ans1*y+temp%y;
       ans2=ans2+y;
      /* printf("%d %d\n",ans1,ans2);*/
    }
y=10*y;
    x=x/10;
    i++;
}
printf("Case #%lld: %lld %lld\n",j,ans1,ans2);


}


}

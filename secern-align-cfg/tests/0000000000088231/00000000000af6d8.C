#include<stdio.h>
int main()
{
   int i,j,n,a,r,b,c,temp;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
    scanf("%d",&a);
    c=a;
    for(j=1,temp=a;temp!=0; j*=10){
        r=temp%10;
        if(r==4) c-=j;
        temp/=10;
    }
    b=a-c;
    printf("Case #%d: %d %d\n",i,c,b);
   }
}

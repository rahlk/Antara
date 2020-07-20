
#include<stdio.h>
#include<math.h>
int main()
{
    int T,i;
    scanf("%d",&T);

      for(i=1;i<=T;i++){
             long long int n ,a=0,t,c=0,b;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
       if(n%10==4)
           a+=pow(10,c);
        n=n/10;
        c++;
    }
    b=t-a;

printf("Case #%d:%d %d\n",i,a,b);


         // cout<<"Case #" <<i<<": "<<a<<" "<<b<<endl;
      }
return 0;
}

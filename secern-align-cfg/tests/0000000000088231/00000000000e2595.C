#include<stdio.h>
int power(int dp){
    int ten=1;
if(dp==1)return 1;
else while(--dp){
    ten*=10;
}
return ten;
}

int checkforfour(int *b,int *a,int d){
int b1=*b;
long long int dp=0,n;
while(b1!=0){
    dp+=1;
    if(b1%10==4){
        if(d==2){
           *b=*b-((power(dp)));
        *a+=((power(dp)));
        }
        else{
        *b=*b+((power(dp)));
        *a-=((power(dp)));
        }

        return dp;
    }


    b1=b1/10;
}
dp=0;
return dp;
}

int main(void){
int *p;
int *p1;
int t,dp=0,tc=1;
long long int n,a,b,b1,a1;
scanf("%d",&t);
while(t!=0){
scanf("%lld",&n);
p=&a;
p1=&b;

a=0;
b=n;
b1=b;
a1=a;
while(b1!=0){
if(b1%10==4) checkforfour(p1,p,2);
b1/=10;
}
while(a1!=0){
if(a1%10==4) checkforfour(p1,p,1);
a1/=10;
}
printf("Case #%d: %lld %lld\n",tc,a,b);
tc++;
t--;
}
}



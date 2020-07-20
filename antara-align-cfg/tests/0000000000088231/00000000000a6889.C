#include<stdio.h>
#include<math.h>
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        long long a,b,c,cc,d,e=0;
        double f=1;
        scanf("%lld",&c);
        a=c;
        cc=c;
        while(c!=0){
            d=c%10;
            if(d==4){
                if(f==1){
                a=a-1;
                }
                else{
                    a=a-e;
                }
            }
            c=c/10;
            e=ceil(pow(10,f));
            f++;
        }
        b=cc-a;
        printf("Case #%d: %lld %lld\n",i,a,b);
    }
return 0;
}


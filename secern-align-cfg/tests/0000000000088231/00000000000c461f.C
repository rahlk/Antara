#include<stdio.h>
#include<math.h>
int main(){
    int t,t2,n,n1,num,a,count,b;
    scanf("%d",&t);
    t2=t;
    while(t--){
        b=0;
        scanf("%d\n",&num);
        n1=num;
        if(num%10==4){
            
            num-=1;
        }
        n=num;
        count=-1;
        while(n>0){
            count++;
            a=n%10;
            if(a==4){
                num=num-pow(10,count);
            }
            n=n/10;
        }
        printf("Case #%d: %d %d",t2-t,num,n1-num);
        printf("\n");
        
        
        
    }
}
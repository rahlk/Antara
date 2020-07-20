#include <stdio.h>

int Four(int a){
while(a!=0){
if(a%10==4)
return -1;
else
a=a/10;
}
return 1;

}

int main(){
    int t,n;
    int x[t];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&x[i]);
        n=x[i]/2;
        if(Four(n)>0 && n%2==0){
            printf("Case #%d: %d %d",i+1,n,n);
        }
        else if(Four(n)>0 && n%2!=0){
            printf("Case #%d: %d %d",i+1,n+1,n);
        }
        else{
            printf("Case #%d: %d %d",i+1,x[i]-1,1);
        }
    }
    
}
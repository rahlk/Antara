#include<stdio.h>
void main(){
    int t,y,n,a=0,b=0,flag=0,temp,x,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        printf("Case #%d\t",i);
        for(i=0;i<6;i++){
        a=(n/2)+i;
    
        while(a%10!=0){
            temp=x%10;
            if(temp==4){
                flag=1;
                break;
            }
            a=x/10;
        }
        if(flag!=1){
            a=(n/2)+i;
            b=n-a;
            break;
        }
        
        
    }
    printf("%d %d",a,b);
    }
}
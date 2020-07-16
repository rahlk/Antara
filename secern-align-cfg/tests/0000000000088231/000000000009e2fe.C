#include<stdio.h>
int rev(num,orig){
    int res=0;
    while(num>0){
        res*=10;
        res+=num%10;
        num/=10;
    }
    while(orig>0){
        if(orig%10==0){
            res*=10;
        }else{
            break;
        }
        orig/=10;
    }
    return(res);
}

int main(){
    int n,num,num1,orig,num2,dig;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        num1=0;
        num2=0;
        scanf("%d",&num);
        orig=num;
        while(num>0){
            num1*=10;
            num2*=10;
            dig=num%10;
            if(dig==4){
                num2+=2;
                num1+=2;
            }
            else{
                num1+=dig;
            }
            num=num/10;
        }
        printf("Case #%d: %d %d\n",i+1,rev(num1,orig),rev(num2,orig));
    }
    return 0;
}
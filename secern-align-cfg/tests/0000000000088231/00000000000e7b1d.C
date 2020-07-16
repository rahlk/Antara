#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=1;
    while(n-->0){
        int k;
        scanf("%d",&k);
        int c=0;
        int a=n,p=n;
        while(p!=0){
            c++;
            int r=p%10;
            if(r==4){
                int power=(int)pow(10,c-1);
                a=a-power;
                p=a;
                p=p/(power*10);
            }
            else{
                p=p/10;
            }
        }
        
    
    int f=a;
    int t=k-a;
    printf("Case #%d: %d %d",s++,f,t);
    }
    return 0;
}
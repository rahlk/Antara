#include<stdio.h>

int main(void)
{
    int t;
    int *k;
    int temp;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&k[i]);
    }
    for(int i=0;i<t;i++){
        int n=k[i];
        int a=0;
        int b=0;
        int p=1;
        while(n>0){
            temp=n%10;
            if(temp==4){
                a+=3*p;
                b+=1*p;
            }
            else{
                a+=temp*p;
            }
            n/=10;
            p*=10;
        }
        if(b!=0)
            printf("case#%d: %d %d\n",i+1,a,b);
        else
            printf("case#%d: %d\n",i+1,a);
    }
}
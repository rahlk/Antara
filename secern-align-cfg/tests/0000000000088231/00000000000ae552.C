#include<stdio.h>
#include<math.h>
int main(){
    int k,m,n,d,l;
    scanf("%d",&d);
    for(l=1;l<=d;l++){
    int i=0;
    int sum=1;
    scanf("%d",&k);
    if(k>9){
    int j=k;
    int s=k;
        while(k!=0){
        m=k%10;
        k=k/10;
        i++;
        }
        for(n=0;n<i;n++){
            m=j%10;
            if(m==4){
                sum=(pow(10,n))+sum;
                }
            j=j/10;
        }
        int f=s-sum;
        printf("case #%d: %d %d\n",l,sum,f);
    
    }
    else{
        int f=k/3;
        int g=k-f;
        printf("case #%d: %d %d\n",l,f,g);
    }
    }
        }
        
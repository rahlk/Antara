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
        for(int m=1;m<=x[i];m++){
        for(int j=1;j<x[i];j++){
        if(m+j==x[i]&&(Four(m)>0 && Four(j)>0)){
        printf("Case #%d: %d %d",i+1,m,j);
        break;
        }
            break;

    }
        }
    }

}
    
}
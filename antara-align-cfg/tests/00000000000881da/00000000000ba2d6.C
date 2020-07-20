#include<stdio.h>
int main(){
    int T,N,i,j,k,len;
    char P[20],ans[20];
    scanf("%d",&T);
    for(k=0;k<T;k++){
        scanf("%d",&N);
        len=2*N-2;
        scanf("%s",P);
        for(i=1;i<len;){
            if(P[i-1]!=P[i]){
                ans[i-1]=P[i];
                ans[i]=P[i-1];
            }
            else{
                //j=i;
                for(j=i;j<len;j++){
                    if(P[i-1]!=P[j]){
                        ans[i-1]=P[j];
                        ans[j]=P[i-1]; 
                        break;
                    }
                    else{
                        ans[j]=P[j];
                    }
                }
            }
            i=j+2;
        }
        printf("Case #%d: ",k+1);
        puts(ans);
    }
    return 0;
}
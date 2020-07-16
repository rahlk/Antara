#include<stdio.h>
#include<string.h>

int main(void)
{
    int T,i=1;
    int N,j,k,l,len;
    scanf("%d",&T);

    while(T--){
        scanf("%d",&N);
        char P[2*N-1];
        
        scanf("%s",P);
        
        //strcpy(A,P);
        len = strlen(P);
        for(j=0;j<len;j++){
            if(P[j]=='S'){
                P[j]='E';
            }
            else{
                P[j]='S';
            }
        }

        printf("Case #%d: %s\n",i,P);
        i++;
    }
}

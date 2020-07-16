#include<stdio.h>
#include<string.h>

int main(void)
{
    int T,i=1;
    long int N,j,k,l,len;
    scanf("%d",&T);

    while(T--){
        scanf("%ld",&N);
        char P[2*N-2],A[2*N-2];
        
        scanf("%s",P);
        
        strcpy(A,P);
        len = strlen(A);
        for(j=0;j<len;j++){
            if(A[j]=='S'){
                A[j]='E';
            }
            else{
                A[j]='S';
            }
        }

        printf("Case #%d: %s\n",i,A);
        i++;
    }
}

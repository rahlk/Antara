#include<stdio.h>
#include<string.h>

int main(void)
{
    int T,i=1;
    long int N,j,k,l;
    scanf("%d",&T);

    while(T--){
        scanf("%ld",&N);
        char P[2*N-2],A[2*N-2];
        //int path[5][5]={0};
        scanf("%s",P);
        k=0,l=0;
       // path[0][0]=1;
        for(j=0;j<2*N-2;j++){
            if(P[j]=='S'){
               // k++;
               // path[k][l]=1;
                A[j]='E';
            }
            else{
               // l++;
                A[j]='S';
                //path[k][l]=1;
            }
        }
        A[j]='\0';
        /*for(j=0;j<N;j++){
            for(k=0;k<N;k++){
                printf("%d ",path[j][k]);
            }
            printf("\n");
        }*/
        printf("Case #%d: %s\n",i,A);
        i++;
    }
}

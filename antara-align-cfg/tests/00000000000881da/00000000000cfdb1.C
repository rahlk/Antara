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
        int path[1000][1000]={-1},m=1;
        scanf("%s",P);
        k=0,l=0;
        path[0][0]=1;
        for(j=0;j<2*N-2;j++){
            if(P[j]=='S'){
               k++;
               path[k][l]=1;
            }
            else{
                l++;
                path[k][l]=1;
            }
        }
        k=0,l=0;
        if(P[0]=='S'){
            A[0]='E';
            l++;
            path[k][l]+=1;
        }
        else{
            A[0]='S';
            k++;
            path[k][l]+=1;
        }
        for(j=1;j<2*N-2;j++){
               if(P[j]=='S'){
                if(path[k][l]==2 && path[k+1][l]==-1 && k+1!=N){
                    k++;
                    path[k][l]+=1;
                    A[j]='S';
                }
                else if(path[k][l]==0 && (path[k+1][l]==1 || path[k+1][l]==-1) && k+1!=N){
                    k++;
                    path[k][l]+=1;
                    A[j]='S';
                }
                else{
                    l++;
                    path[k][l]+=1;
                    A[j]='E';
                }
               }
               else{
                if(path[k][l]==2 && path[k][l+1]==-1 && l+1!=N){
                    l++;
                    path[k][l]+=1;
                    A[j]='E';
                }
                else if(path[k][l]==0 && (path[k][l+1]==1 || path[k][l+1]==-1) && l+1!=N){
                    l++;
                    path[k][l]+=1;
                    A[j]='E';
                }
                else{
                    k++;
                    path[k][l]+=1;
                    A[j]='S';
                }
               }
        }
        A[j]='\0';

        printf("Case #%d: %s\n",i,A);
        i++;
    }
}

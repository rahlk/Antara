#include <stdio.h>
#include <string.h>
void printpath(char A[2000],int dim, int no){
    int l = strlen(A),need_to_cross=0;
    //int e=0,s=0;
    char B[2000];
    B[0]='\0';
    for(int i=0; i<l-1; i++){
        if(A[i]=='S'){
            if(i==0){
                B[i]='E'; //e++;
                if(A[l-1]=='S')
                    {need_to_cross=1;B[l-1]='E';}
                else{ B[l-1]='S'; }
            }
            else
            {
            if(A[i-1]!=A[i]  && need_to_cross==1){
                if((i+1) < dim && A[i+1]=='E')
                    {B[i]='S'; need_to_cross=0;}
                
                else
                    {B[i]='E';if((i+1)<dim) {B[i+1]='E';} i=i+1;need_to_cross=0;}    
                }
                
            else
                B[i]=A[i];
            }
        }
        else{
            if(i==0){
                B[i]='S'; //s++;
                if(A[l-1]=='E')
                    {need_to_cross=1;B[l-1]='S';}
                else{ B[l-1]='E'; }            
            }
            else
            {
                if(A[i]!=A[i-1]  && need_to_cross==1){
                    if((i+1) < dim && A[i+1]=='S' )
                        {B[i]='E'; need_to_cross=0;}
                
                     else
                        {B[i]='S'; if((i+1)<dim) {B[i+1]='S';} i=i+1;need_to_cross=0;}    
                }
            
                else
                    B[i]=A[i];

            }
        }
    }
    B[l]='\0';
    printf("Case #%d: %s\n",no,B);
}

int main(){
    int T,dim;
    scanf("%d",&T);
    for(int i =0;i<T;i++){
        scanf("%d",&dim);
        char A[2000];
        scanf("%s",A);
        printpath(A,dim,i+1);
    }
}
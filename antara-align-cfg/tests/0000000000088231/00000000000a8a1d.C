#include <stdio.h>
#include <string.h>

int main(){
    int T;
    char A[100001],B[100001];
    scanf("%d",&T);
    
    for(int i = 0 ;i< T; i++ ){
        scanf("%s",A);
        int l = 0,start=-1;
        while(l<strlen(A)){
            if(A[l]=='4') {A[l]='3';B[l]='1';if(start==-1){start=l;}}
            else{B[l]='0';}
            l++;
        }
        
        printf("Case #%d: %s %s\n",i+1,A,&B[start]);
    }
    
}
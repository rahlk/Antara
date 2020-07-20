#include<stdio.h>

int main(){
    
    int t=0;
    int n=0;
    int i=0,j=0;
    char path[50000];
    char c;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        getchar();
       
        for(j=0;j<2*n-2;j++){
            c=getchar();
            if(c=='S')
                path[j]='E';
            else if(c=='E')
                path[j]='S';
        }
        printf("Case #%d: ",i);
        for(j=0;j<2*n-2;j++)
            printf("%c",path[j]);
        printf("\n");
    }
    
    return 0; 
}
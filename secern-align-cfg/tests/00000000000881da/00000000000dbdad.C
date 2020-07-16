#include<stdio.h>
int main(){
    char dir[50000];
    int i,t,n,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        scanf("%s",dir);
        j=0;
        printf("Case #%d: ",i);
        while(dir[j]!='\0'){
            if(dir[j]=='S')
                printf("E");
            if(dir[j]=='E')
                printf("S");
            j++;
        }
        printf("\n");
    }
}

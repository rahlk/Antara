#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int N,j=0;
        scanf("%d",&N);
        char s[2*N-2];
        scanf("%s",s);
        printf("Case #%d: ",i+1);
        while(s[j]!='\0'){
            if(s[j]=='S')
                printf("E");
            else
                printf("S");
            j++;
        }
        printf("\n");
    }
}
#include<stdio.h>
#include<math.h>
void main(){
    int t,n[100];
    scanf("%d",&t);
    char s[100][100],d[100][100];
    for(int i=0;i<t;i++){
        scanf("%d",&n[i]);
        scanf("%s",&s[i]);
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<((2*n[i])-2);j++){
            if((s[i][j]=='S')||(s[i][j]=='s')){
                d[i][j]='E';
            }
            else{
                d[i][j]='S';
            }
        }
    }
    for(int i=0;i<t;i++){
        printf("Case #%d: %s\n",i+1,d[i]);
    }
}

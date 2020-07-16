#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    int t;
    scanf("%d",&t);
    int i=0,n;
    for(i=1;i<=t;i++){
    scanf("%d",&n);
    int j=1;
    char* p,p1;
    char tmp1[100],tmp2[100];
    if(n%2==0){
        sprintf(tmp1,"%d",n/2);
        sprintf(tmp2,"%d",n/2);
        p = strchr(tmp1, '4');
        p1=strchr(tmp2,'4');
        if(p==NULL && p1==NULL){
            printf("Case #%d: %d %d\n",i,j,n-j);
            continue;
        }
    }
    for(j=1;j<n;j++){
        sprintf(tmp1,"%d",j);
        sprintf(tmp2,"%d",n-j);
        p = strchr(tmp1, '4');
        p1=strchr(tmp2,'4');
        if(p==NULL && p1==NULL){
            printf("Case #%d: %d %d\n",i,j,n-j);
            break;
        }
    }
    }
    return 0;
}
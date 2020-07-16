#include<stdio.h>
#include<string.h>
int main(){
    int t,len;
    scanf("%d",&t);
    char a[101],b[101],n[101];
    for(int j=1;j<=t;j++){
        scanf("%s",n);
        len = strlen(n);
        for(int i=0;i<len;i++){
            if(n[i]=='4'){
                b[i]='2';
                a[i]='2';
            }
            else{
                b[i]=n[i];
                a[i]='0';
            }
        }
        b[len]='\0';
        a[len]='\0';
        printf("Case #%d: %s %s\n",j,a,b);
    }
    return 0;
}

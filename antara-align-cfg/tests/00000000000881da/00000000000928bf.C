#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int l=1;
    while(l<=t){
        long int n;
        scanf("%ld",&n);
        char a[2*n];
        scanf("%s",a);
        for(long int i=0;a[i]!='\0';i++){
            if(a[i]=='E'){
                a[i]='S';
            }
            else if(a[i]=='S'){
                a[i]='E';
            }
        }
        printf("Case #%d: %s\n",l,a);
    }
}

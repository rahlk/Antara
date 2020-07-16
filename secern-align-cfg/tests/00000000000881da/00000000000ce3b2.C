#include <stdio.h>

int main(){
    int t,a;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d\n",&a);
        char str[a],str1[a];
        scanf("%[^\n]",str);
        int b=0;
        while(str[b]!='\0'){
            if(str[b]=='S'){
            str1[b]='E';
        }
        else{
            str1[b]='S';
        }
        b++;
        }
        str1[b]='\0';
        printf("Case #%d:%s",i+1,str1);
    }
}
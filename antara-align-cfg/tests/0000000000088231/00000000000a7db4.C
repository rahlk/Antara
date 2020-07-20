#include<stdio.h>
int main(){
    int t,x=1,i;
    for(scanf("%d",&t);t!=0;t--,x++){
        char str[1000],ch;
        long long int n=0,num=0,rem;
        str[0]='\0';
       scanf("%c",&ch);
       scanf("%s",str);
        for(i=0;str[i]!='\0';i++){
           n=n*10+(str[i]-'0');
       }
       for(i=0;str[i]!='\0';i++){
           if(str[i]=='4'){
               str[i]='3';
           }
       }
       for(i=0;str[i]!='\0';i++){
           num=num*10+(str[i]-'0');
       }
       rem=n-num;
       printf("Case #%d: %lld %lld\n",x,num,rem);
    }
    return 0;
}
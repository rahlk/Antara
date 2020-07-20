#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
         char a[200],b[200];
         int i=0;
         scanf("%s",&a);
         while(a[i]!='\0'){
            if(a[i]=='4'){
                 a[i]='2';
                 b[i]= '2';
            }
            else b[i]='0';
            i++;
         }
         b[i]='\0';
         printf("%s %s\n",a,b);
    }
    return 0;
}

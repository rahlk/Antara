#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
         char a[101],b[101];
         int i=0,flag = 0,j=0;
         scanf("%s",&a);
         while(a[i]!='\0'){
            if(a[i]=='4'){
                 a[i]='2';
                 b[j++3]= '2';
                 flag =1;
            }
            else if(flag == 1)
                b[j++]='0';
            i++;
         }
         b[j]='\0';
         i=0;
         printf("%s %s\n",a,b);
    }
    return 0;
}

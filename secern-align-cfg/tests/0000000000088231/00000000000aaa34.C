#include<stdio.h>
#include<string.h>
int main(){
    int t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++){
         char a[200],b[200];
         int i=0,flag = 0,j=0;
         scanf("%s",&a);
         while(a[i]!='\0'){
            if(a[i]=='4'){
                 a[i]='2';
                 b[j++]= '2';
                 flag =1;
            }
            else if(flag == 1)
                b[j++]='0';
            i++;
         }
         b[j]='\0';

         printf("Case #%d: %s %s\n",k,a,b);
    }
    return 0;
}


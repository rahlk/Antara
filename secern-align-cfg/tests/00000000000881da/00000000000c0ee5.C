#include<stdio.h>
#include<string.h>
int main(){
int i,n,m,j,x,c=0;
 scanf("%d",&x);
 for(j=0;j<x;j++){
     scanf("%d",&n);
     m=((2*n)-2);
      char ch[m];
      scanf("%s",ch);
    for(i=0;i<m;i++){
       if(ch[i]=='E'){
         ch[i]='S';
       }
        else if(ch[i]=='S'){
            ch[i]='E';
        }
    }
printf("Case #%d: %s\n",j+1,ch);
 }
return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
int i,n,l,j,x,c=0;
 scanf("%d",&x);
 for(j=0;j<x;j++){
     scanf("%d",&n);
     l=((2*n)-2);
      char ch[l];
      scanf("%s",ch);
    for(i=0;i<l;i++){
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

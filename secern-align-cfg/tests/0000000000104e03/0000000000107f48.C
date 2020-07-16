#include<stdio.h>
int main(){
int t,r,c;
scanf("%d\n",&t);
scanf("%d %d",&r,&c);
for(int i=0;i<=r;i++)
for(int j=0;j<=c;j++)
if(r==c){
printf("IMPOSSIBLE");}
else
printf("POSSIBLE");
}
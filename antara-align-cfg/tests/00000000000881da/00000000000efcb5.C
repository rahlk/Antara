#include<stdio.h>
int main(){
int loop=0;
scanf("%d",&loop);
for(int i=0;i<loop;i++){
int size=0;
scanf("%d",&size);
char lydia[(2*size-2)];
scanf("%s",&lydia);
for(int j=0;j<2*size-2;j++){
if(lydia[j]=='E'){
lydia[j]='S';
}else{
lydia[j]='E';
}
}
printf("Case #%d: %s",i+1,lydia);
return 0;
}
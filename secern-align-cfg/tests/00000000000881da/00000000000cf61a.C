#include<stdio.h>
int main(){
int t,n,t1;

scanf("%d",&t);
t1=t;
while(t--){
scanf("%d",&n);
char st[2*n-2];
char st2[2*n-2];
scanf("%s",st);
for(int i=0;i<2*n-2;i++){
if(st[i]=='E')
st2[i]='S';
else
st2[i]='E';}
printf("Case #%d: %s\n",t1-t,st2);
    
}
return 0;}





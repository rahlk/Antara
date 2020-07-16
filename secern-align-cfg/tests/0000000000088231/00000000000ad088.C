#include <stdio.h>
int h4(int a,int b){
while(a!=0 && b!=0){
if(a%10==4 || b%10==4){
return 0;
}
else{
a=a/10;
b=b/10;
}
}
}
int main(){
int a,p;
scanf("%d",&a);
for(int i=1;i<a;i++){
if(h4(i,a-i)){
p=i;
break;
}
else{
continue;
}
}
printf("%d %d",p,a-p);
return 0;
}
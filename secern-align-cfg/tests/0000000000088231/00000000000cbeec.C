#include<stdio.h>
#include<math.h>

void main(){

int t;
scanf("%d",&t);

for(int i=0;i<t;i++){

int n,a,b;
scanf("%d",&n);
a = n/2;
b = n/2;
if(a==4){
    a = a-1;
    b = b+1;    
}
if(b==4)
{
 b = b-1;
 a = b + 1;
}
printf("Case #%d: %d %d\n",i+1,a,b);


}
}
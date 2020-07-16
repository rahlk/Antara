#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int num[n],a,b;
int i=0;
while(i<n){
scanf("%d",&num[i]);
++i;}
i=0;
int y,x,j,l,z,t,m,c;
c=0;
while(i<n){
j=i;
a=num[i]-1;
b=1;
x=a;
y=b;
while(x>0){
m=x;
z=0;
while(m>0){
t=m%10;
c++;
m/=10;
if(t==4){
z=1;
int e,f,p;
p=x;
e=1;
f=1;
while(f<c){
e*=10;
++f;}
x=x-p%e-1;
y=num[i]-x;
break;}}
l=y;
c=0;
while(z==0&&l>0){
t=l%10;
c++;
l/=10;
if(t==4){
int e,f,p;
p=x;
e=1;
f=1;
while(f<c){
e*=10;
++f;}
x=x-p%e-1;
z=1;
break;
}
}
if(z==0)
{
printf("Case #%d: %d %d\n",(i+1),x,y);
break;
}
}
++i;
}
return 0;
}
y=num[i]-x;break;}}
if(z==0){
printf("Case #%d: %d %d\n",(i+1),x,y);
break;}}
++i;}
return 0;}
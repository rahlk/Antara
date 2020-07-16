#include<stdio.h>
int main()
{
int testcases,w;
scanf("%d %d",&testcases,&w);
int arr[6],r1=0,r2=0,r3=0,r4=0,r5=0,r6=0;
if(w==6)
{
for(int a=0;a<testcases;++a)
{
for(int b=0;b<w;++b)
{
printf("%d",(b+1));
scanf("%d",&arr[b]);
}
r1=arr[1]-arr[0];
r2=arr[2]-arr[1]-(2*r1);
r3=arr[3]-arr[2]-(2*2*r1);
r4=arr[4]-arr[3]-(2*2*2*r1)-(2*r2);
r5=arr[6]-arr[5]-(2*2*2*2*r1);
r6=arr[1]-r2-r3-r4-r5-2*r1;
printf("%d,%d,%d,%d,%d,%d\n",r1,r2,r3,r4,r5,r6);
}//testcases wala for
}
else
{
for(int a=0;a<testcases;++a)
{


}
}
return 0;
}
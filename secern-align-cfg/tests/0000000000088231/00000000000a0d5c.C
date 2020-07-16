#include<stdio.h>
int main()
{
int T,z=1;
scanf("%d",&T);
    while(T--)
{

     int N,a,b,c,d;
scanf("%d",&N);

    for(c=N-1;c>0;c--)
{
a=c;
while(a%10!=4 && a>0)
{ 
a=a/10;
}
if(a==0 )
{
b=N-c;
d=b;
while(b%10!=4 && b>0)
{
b=b/10;
}
if(b==0)
{
break;
}

}
}
printf("Case #%d: %d %d\n",z,c,d);
z++;
}
}
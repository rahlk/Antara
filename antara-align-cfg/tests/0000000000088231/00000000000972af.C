#include<stdio.h>
int main()
{
int T,x,A,B,N,t;
scanf("%d",&T);
int i,j,k,y[10],r;
t=1;
while(T--)
{
scanf("%d",&N);
k=N;
i=0;
j=1;
int l=0;
while(k!=0)
{
y[l]=k%10;
k=k/10;
i++;
l++;
if(k!=0) j=j*10;
}
k=0;
r=0;
A=0;
B=0;
while(i--)
{
r=y[i];
if(r==4)
{
r=2;
B=B+2*j;
}

k=r*j;
A=A+k;
j=j/10;
}
printf("Case #%d: %d %d\n",t++,A,B);

}
return 0;
}
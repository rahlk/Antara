void main()
{
int T,N,t,a,b,c,d,flag=0,flag2=0;
clrscr();
printf("enter test case");
scanf("%d",&T);
printf("enter no. of jamcoins");
scanf("%d",&N);
for(t=1;t<=100&&t<=T;t++)
{
if(N%2==0)
{a=N/2;
b=N/2;
for(;a>0;a--)
{
}
for(;b>N;b++)
{
}
c=a;
d=b;
for(;c>0;c/10)
{if(c%10==4)
{flag=1;
}}
for(;d>0;d/10)
{if(d%10==4)
{flag2=1;
}
}
if(flag==0&&flag2==0)
{printf("#%d %d %d",t,a,b);
}
}

getch();
}
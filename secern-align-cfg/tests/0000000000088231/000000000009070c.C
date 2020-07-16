#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
long double T,N,n,a[100],b;
cin>>T;
for(int i=1;i<=T;i++)
{
cin>>N;
n=N;
cout<<"\nCase #"<<i<<": ";
int x,len=0;
while(n>0)
{
a[len]=n%10;
n=n/10;
len++;
}
b=0;
for(x=len-1;x>=0;x++)
{
    if(a[x]==4)
    {
        b=b+2*pow(10,x);
    }
}
n=N-b;
cout<<n<<" "<<b;
}
getch();
}
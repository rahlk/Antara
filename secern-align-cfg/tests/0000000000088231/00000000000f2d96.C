#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int T,N;
int count = 0;
int a[T][count],b[T][count];
scanf("%d",&T);
while(T>0)
{

    scanf("%d",&N);
int j=N,l=N,i;
    while(j != 0)
    {
        // n = n/10
        j /= 10;
        ++count;
    }

    while(l!=0)
    {
        a[T][i]=l%10;
        l/=10;
        i++;
    }
for(int j=0;j<count;j++)
{
    if(a[T][i]==4)
    {
        a[T][i]-=1;
    }
    b[T][count-j]=a[T][j];
}
printf("%s",b);
printf(" %d",N-b[T][count]);
T--;
}
}
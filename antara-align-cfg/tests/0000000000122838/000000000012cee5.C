#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n][2];
int i=0;
while(i<n)
{
scanf("%d",&a[i][0]);
scanf("%d",&a[i][1]);
int x[a[i][0]];
int y[a[i][0]];
int j=0;
while(j<a[i][0])
{
scanf("%d",&x[j]);
j++;
}
j=0;
while(j<a[i][0])
{
scanf("%d",&y[j]);
j++;
}
j=0;
int count=0;
while(j<a[i][0])
{
int k=0;
while(k<=j)
{
int m=x[j]-y[k];
if(m>=0&&m<=a[i][1])count++;
k++;
}
j++;
}
printf("Case #%d: %d",(i+1),count);
i++;
}
return 0;
}
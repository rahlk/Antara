#include<stdio.h>
int main()
{
int numberOfTestCases;
scanf("%d",&numberOfTestCases);
int i=0,j;
int mazeD;
int p,n;
while(i<numberOfTestCases)
{
scanf("%d",&mazeD);
p=mazeD*2-1;
char x[p];
scanf("%s",x);
j=0;
n=p-1;
printf("Case #%d: ",i+1);
while(j<n)
{
if(x[j]=='E')printf("S");
else printf("E");
++j;
}
printf("\n");
++i;
}
return 0;
}
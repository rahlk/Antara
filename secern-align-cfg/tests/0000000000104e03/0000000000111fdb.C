#include<stdio.h>
#include<conio.h>
main()
{
int n,i,r,c;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d %d",&r,&c);
if(r==c)
{
    printf("case #%d: IMPOSSIBLE",i);
}
    else
    printf("case #%d: POSSIBLE",i);
}
}
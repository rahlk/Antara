#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("enter no");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    if(i==4)
    printf("%d"i%2);
    
else
printf("%d",i*i*i);
getch();
}
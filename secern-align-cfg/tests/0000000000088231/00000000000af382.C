#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    int t,i,j,count=0,a[10],modi,abhi,b[10],c[10];
    long int n;
clrscr();
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%ld",&n);
    while(n!=0)
    {
	modi=n%10;
	a[count]=modi;
	count++;
	n=n/10;
    }

    for(j=0;j<count;j++)
    {
	if(a[j]==4)
	{
	    b[j]=(a[j]/2);
	    c[j]=(a[j]/2);;
	}
	else
	    {
	    b[j]=a[j];
	    c[j]=0;
	    }
    }
    for(j=count-1;j>=0;j--)
printf("%d",b[j]);
    printf("  ");
     for(j=count-1;j>=0;j--)
printf("%d",c[j]);
count=0;
getch();
    }
    return 0;
}

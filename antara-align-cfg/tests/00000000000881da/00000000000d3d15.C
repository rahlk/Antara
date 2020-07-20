#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define SIZE 10000
long st1[SIZE],st2[SIZE];
int top1=-1,top2=-1,top=-1;
char a;
void push1(long st1[],int m,char a)
{
	if(top1==m)
		return;
	top1++;
	st1[top1]=a;
}
char pop1(long st1[],int m)
{
	if(top1==-1)
		return -1;
	return st1[top1--];
}
void push2(long st2[],int m,char a)
{
	if(top2==m)
		return;
	top2++;
	st2[top2]=a;
}
char pop2(long st2[],int m)
{
	if(top2==-1)
		return -1;
	return st2[top2--];
}
int main()
{
	int t;
	long n,p,c1,c2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld\n",&n);
		p=(2*n)-2;
		c1=p/2;
		c2=p/2;
		for(long i=0;i<p;i++)
		{
			scanf("%c",&a);
			push1(st1,p,a);
		}
		printf("\n");
		if(st1[top1]=='E'){
			c1--;
			push2(st2,p,'S');
		}
		else if(st1[top1]=='S'){
			c2--;
			push2(st2,p,'E');
		}
		pop1(st1,p);
		for(int i=0;i<p-1;i++)
		{
			if(st1[top1]=='S'){
					c2--;
					push2(st2,p,'E');
			}
			else if(st1[top1]=='E'){
					c2--;
					push2(st2,p,'S');
			}
			pop1(st1,p);
		}
		for(long i=0;i<p;i++)
		{
			printf("%c",pop2(st2,p));
		}
		printf("\n");
	}
}
#include<stdio.h>
int A,B
int i=0;
void func(int num)
{
A=num/4;
B=A*3;
++i;
}
int main()
{
int num;
scanf("%d",&num);
func(num);
printf("Case #%d: %d %d",i,A,B);
printf("\n");
return 0;
}
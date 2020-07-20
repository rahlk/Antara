#include<stdio.h>
int A,B
void func(int num)
{
A=num/4;
B=A*3;
printf("%d %d",A,B);
}
int main()
{
int num;
scanf("%d",&num);
func(num);
return 0;
}
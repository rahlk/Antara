#include<stdio.h>
int A,B;
void func(int num)
{
A=num/4;
B=A*3;
}
int main()
{
int num;
scanf("%d",&num);
func(num);
printf("%d %d",A,B)
return 0;
}
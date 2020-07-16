#include<stdio.>
int main()
{
int n,t,l,a=101,b,i,j,flag;
printf("enter the number of test cases");
scanf("%d",&t);
printf("enter the upper limit and number of alphabets");
scanf("%s %d",&n,&l);
while(t>0)
{
if(l<25){
printf("not a panagram");}
else iffor(i=a;i<=b;i++){
if(i==1)
continue;
flag=1;
for(j=2;j<i/2;++j)
{if(i%j==0)
{flag=0;
break;}
}
if(flag==1)
printf("%d  ",i);
}
}
return 0;
}
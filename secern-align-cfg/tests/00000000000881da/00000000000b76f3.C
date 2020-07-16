#include<stdio.h>
#include<malloc.h>
int main()
{
int t,size,i,k,val;
char *str;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&size);
str = (char *)malloc(size*sizeof(char));
scanf("%s",str);
printf("Case #%d: ",i+1);

for(k=0;k<2*size-2;k++)
{
if(str[k]=='E') printf("S");
if(str[k]=='S') printf("E");
}
printf("\n");
}
return 0;
}



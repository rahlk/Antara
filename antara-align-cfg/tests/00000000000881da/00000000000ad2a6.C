#include<stdio.h>
#include<malloc.h>
int main()
{
int t,size,i,k;
char *str,*target;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&size);
str = (char *)malloc(size*sizeof(char));
target = (char *)malloc(size*sizeof(char));
scanf("%s",str);
for(k=0;k<size;k++)
{
if(str[k]=='S') target[k]='E';
if(str[k]=='E') target[k]='S';
}
printf("Case #%d: ",i+1);
for(k=0;k<size;k++)
{
printf("%c",target[k]);
}
printf("\n");
}
return 0;
}



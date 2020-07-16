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

for(k=0;k<val;k++)
{
if(str[k]=='E') printf("S");
else printf("E");
}
printf("\n");
}
return 0;
}



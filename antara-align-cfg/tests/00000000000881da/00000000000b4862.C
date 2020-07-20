#include<stdio.h>
#include<malloc.h>
int main()
{
int countS=0,countE=0;
int t,size,i,k,val;
char *str,*target;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&size);
str = (char *)malloc(size*sizeof(char));
target = (char *)malloc(size*sizeof(char));
scanf("%s",str);
val = 2*size - 2;
if(str[0]=='S')
{
target[0]='E';

countE++;
}
if(str[0]=='E')
{
target[0]='S';

countS++;
}
if(str[val-1]=='S')
{
target[val-1]='E';

countE++;
}
if(str[val-1]=='E')
{
target[val-1]='S';

countS++;
}

if(size==2)
{
printf("Case #%d: ",i+1);

for(k=0;k<val;k++)
{
printf("%c",target[k]);
}
printf("\n");
continue;
}

if(countS==countE)
{
for(k=1;k<val-1;k++)
{
if(str[k]=='E') target[k]='S';
if(str[k]=='S') target[k]='E';
}
}

if(countS!=countE)
{
for(k=1;k<val-1;k++)
{
if(countS==countE)
{
target[k]=str[k];
}
else
{
if(str[k]=='S') 
{
target[k]='E';
countE++;
}
else
{
target[k]='S';
countS++;
}
}
}
}
printf("Case #%d: ",i+1);

for(k=0;k<val;k++)
{
printf("%c",target[k]);
}
if(i!=t-1) printf("\n");
}
return 0;
}



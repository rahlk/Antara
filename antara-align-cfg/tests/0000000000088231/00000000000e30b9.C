#include<stdio.h>

#include<string.h>

int main()

{

char a[10000],b[10000];

int i=0,j,e=1,f=0,T,g;

scanf("%d",&T);
fflush(stdin);

while(e<=T)

{

i=0;

fgets(a,100,stdin);
fflush(stdin);
g=strlen(a);
i=g-1;
j=i-1;
g=-1;
b[i]='\n';

i--;
while(i>=0)
{
if((a[i]-48)==4)
g=i;
i--;
}
i=j;
if(g>=0)
{

while(i>=g)

{

if(a[i]-48!=0 && a[i]-48!=5)

{

a[i]=(a[i]-1)-f;

b[i]=49;

if(f==1)
    
f=0;

}

else

{

if((a[i]-48)==0)

{

a[i]=a[i]+5;

b[i]=a[i];

f=1;

}

else

{
    
a[i]=a[i]-2;

b[i]=a[i]-1;

}

}

if((a[i]-48)==4 || (b[i]-48)==4)

{

a[i]+=1;

b[i]-=1;

}

i--;

}

printf("Case #%d: ",e);

i=0;

while(a[i]!='\n')

{
printf("%c",a[i]);

i++;

}

printf(" ");

while(b[g]!='\n')

{
printf("%c\n",b[g]);

g++;

}

}
else
continue;
e++;

}
return 0;

}
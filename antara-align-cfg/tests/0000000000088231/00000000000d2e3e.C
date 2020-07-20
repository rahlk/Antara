#include<stdio.h>

#include<string.h>

int main()

{

char a[102],b[102];

int i=0,e=1,f=0,T;

scanf("%d",&T);
fflush(stdin);

while(e<=T)

{

i=0;

fgets(a,100,stdin);

while(a[i]!='\n')

{

i++;

}
b[i]='\n';

i--;

while(i>=0)

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
if(a[i]!=48)

printf("%c",a[i]);

i++;
}

i=0;

printf(" ");

while(b[i]!='\n')

{
if(b[i]!=48)

printf("%c",b[i]);

i++;
}

e++;

}

return 0;

}
#include<stdio.h>

#include<string.h>

int main()

{

char a[50000];

int i=1,T,N,e=0;

scanf("%d",&T);
fflush(stdin);

while(i<=T)

{

e=0;
scanf("%d",&N);
fflush(stdin);
fgets(a,50000,stdin);

while(a[e]!='\n')

{

if(a[e]=='E')
{
a[e]='S';

}

else

{

a[e]='E';

}

e++;

}

e=0;

printf("Case #%d: ");

while(a[e]!='\n')

{
    
printf("%c",a[e]);
e++;

}

i++;

}

return 0;

}
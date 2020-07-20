#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
int t,n[1000],i,j;
char a[100][100],b[100][100];
scanf("%d",&t);

for(i=0;i<t;++i)
{
scanf("%d",&n[i]);
scanf("%s",a[i]);
}

for(i=0;i<t;++i)
{
 for(j=0;j<strlen(a[i]);++j)
 {
    if(a[i][j]=='E')
    {
        b[i][j]='S';
    }
    else if(a[i][j]=='S')
        b[i][j]='E';

 }
}

for(i=0;i<t;++i)
{

printf("Case #%d: %s\n",i+1,b[i]);
}

exit(0);
}

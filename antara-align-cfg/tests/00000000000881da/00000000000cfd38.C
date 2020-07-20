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
if(j==0)
{if(a[i][j]=='E')
    {
        b[i][j]='S';
    }
 else
    b[i][j]='E';

}
else if(j==(n[i]*2-3))
{
 if(a[i][j]=='E')
    {
        b[i][j]='S';
    }
 else
    b[i][j]='E';
}
else if((a[i][j]=='E')&&(a[i][j+1]=='E'))
    b[i][j]='S';
else if((a[i][j]=='E')&&(a[i][j+1]=='S'))
    b[i][j]='E';
else if((a[i][j]=='S')&&(a[i][j+1]=='S'))
    b[i][j]='E';
else if((a[i][j]=='S')&&(a[i][j+1]=='E'))
    b[i][j]='S';
}

}
for(i=0;i<t;++i)
{

printf("Case #%d: %s\n",i+1,b[i]);
}

exit(0);
}

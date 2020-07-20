#include<stdio.h>

int main()

{

int s,n;

scanf("%d",&s);

char a[s][10000];

for(int i=0;i<s;++i)

{

scanf("%d",&n);

scanf("%s",a[i]);

}

for(int i=0;i<s;++i)

{

for(int k=0;a[i][k]!='\0';++k)

{

if(a[i][k]=='E')a[i][k]='S';

else
 a[i][k]='E';

}

printf("Case #%d: %s \n",i+1,a[i]);

}

return 0;

}






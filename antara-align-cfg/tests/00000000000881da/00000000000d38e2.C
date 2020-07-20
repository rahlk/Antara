#include<string.h>
int main()
{
int t,i,j,k=1,char n[1000];
scanf("%d",&j);
while(i--)
{
int r;
scanf("%d",&r);
scanf("%s",n);
printf("case # %d:",k++);
for(i=0;i<strlen(n);i++)
{
if(n[i]=='S')
{
printf("E");
}

else
{
printf("S");
}
}
printf("\n");
}
}
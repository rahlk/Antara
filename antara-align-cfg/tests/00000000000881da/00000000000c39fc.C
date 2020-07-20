#include<stdio.h>
int main()
{
int t,n,i,k;
scanf("%d",&t);
for (k=0;k<t;++k)
{
scanf("%d",&n);
char p[2*n];
  
scanf("%s",p);     
for(i=0;p[i]!='\0';i++)
    
{
        
if(p[i]=='S')
{
p[i]='E';
}   
else
{
p[i]='S';
}
}
    
printf("Case #%d: %s\n",k+1,p);
}

return 0;
}
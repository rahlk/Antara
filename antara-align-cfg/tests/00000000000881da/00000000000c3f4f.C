#include<stdio.h>
int main()
{
 int i,j,t,k,n,m,f;
 long long int;
 char s[100000];
scanf("%d",&t);
for(f=1;f<=t;f++)
{
  scanf("%d",&n);
  scanf("%s",s);
  j=2*n-3;
  printf("Case #%d: ",f);
  if(s[0]=='E'&&s[j]=='S')
  {
      for(i=1;i<=n-1;i++)
        printf("S");
      for(i=1;i<=n-1;i++)
        printf("E");
  }
   else if(s[0]=='S'&&s[j]=='E')
  {
      for(i=1;i<=n-1;i++)
        printf("E");
      for(i=1;i<=n-1;i++)
        printf("S");
  }
 else if(s[0]=='S'&&s[j]=='S'){
i=1;k=0;
while(i<j)
{
    if(s[i]=='E')
    {   k++;
        if(s[i+1]=='E')
            break;
        i=i+2;
        continue;
    }
  i++;
}
for(m=1;m<=k;m++)
    printf("E");
for(m=0;m<n-1;m++)
    printf("S");
for(m=k+1;m<=n-1;m++)
    printf("E");

 }
 else
 {
     i=1;k=0;
while(i<j)
{
    if(s[i]=='S')
    {   k++;
        if(s[i+1]=='S'){

            break;}

         i=i+2;
        continue;
    }
  i++;
}
for(m=1;m<=k;m++)
    printf("S");
for(m=0;m<n-1;m++)
    printf("E");
for(m=k+1;m<=n-1;m++)
    printf("S");

 }
  printf("\n");
}
return 0;
}

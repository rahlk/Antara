
#include<stdio.h> 
#include<string.h> 
 


int main() 
{  

 int q,j;
 scanf("%d",&q);
 
 for(j=1;j<=q;j++)
 {
    
int n,i;
 char a[50000],b[50000];
scanf("%d",&n);
scanf("%s",a);
for(i=0;i<strlen(a);i++)
{
    
    if(a[i]=='E')
    b[i]='S';
    else
    b[i]='E';
    
}
   

  printf("Case #%d: ",j);
  if(strlen(b)>10)
   printf("%s",a);
 
  else
   for(i=strlen(b);i>=0;i--)
  printf("%c",b[i]);
printf("\n");
 
 }
 
	return 0; 
} 

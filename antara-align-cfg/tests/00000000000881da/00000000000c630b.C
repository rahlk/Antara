
#include<stdio.h> 
 


int main() 
{  

 int q,j;
 scanf("%d",&q);
 
 for(j=1;j<=q;j++)
 {
    
int n,i;
 char a[10000],b[10000];
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
  for(  i=0;i<strlen(b);i++)
  printf("%c",b[i]);
printf("\n");
 
 }
 
	return 0; 
} 


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

   

  printf("Case #%d: ",j);
 
  for(i=strlen(a);i>=0;i--)
  printf("%c",a[i]);
 
printf("\n");
 
 }
 
	return 0; 
} 

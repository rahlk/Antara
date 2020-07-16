#include <stdio.h>

int main()
{
  int T,i,j;
  unsigned long long N[100];
  char a[101][50010],b[50010];
  scanf("%d",&T);
 
  for (i=1;i<=T;i++){
       scanf("%llu",&N[i]);
       for(j=1;j<=(2*N[i]-1);j++){
         scanf("%c",&a[i][j]);  
       }
      } 
   for (i=1;i<=T;i++){  
     for(j=1;j<=(2*N[i]-1);j++){
         if(a[i][j]=='E')
          b[j]='S';
         else if(a[i][j]=='S') 
          b[j]='E';
     }
    printf("\nCase #%d",i);
    printf(": %c",b[1]);
    b[1]=(char)0;
    for(j=2;j<=(2*N[i]-1);j++){
        printf("%c",b[j]);
        b[j]=(char)0;
    }
  }
    return 0;
}
#include  <stdio.h>

char s[100100];
char r[100100];


int main()
{ long long int T,n,i,j,c;
  scanf("%lld",&T);
  
  for(i=1;i<=T;i++)
  { scanf("%lld%s",&n,s);
    
    for(j=0;j<strlen(s);j++)
    { if(s[j]=='E')
      r[j]='S';
      else if(s[j]=='S')
      r[j]='E';    
    }
   
   printf("Case #%lld: ",i);
   
   for(j=0;j<strlen(s);j++)
   printf("%c",r[j]); 
   
 
   printf("\n");
   
  }    
    
    return 0;
}
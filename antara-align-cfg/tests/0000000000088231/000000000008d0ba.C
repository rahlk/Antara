#include  <stdio.h>

char s[110];
long long int A[110],B[110];

int main()
{ long long int T,d,i,j,c;
  scanf("%lld",&T);
  
  for(i=1;i<=T;i++)
  { scanf("%s",s);
    
    for(j=0;j<strlen(s);j++)
    { c=0;
      d=s[j]-48;
      if(d==4)
      {A[j]=3;
       B[j]=1;
      }
      else
      {A[j]=d;    
       B[j]=0;
      }
    }
   
   printf("Case #%lld: ",i);
   
   for(j=0;j<strlen(s);j++)
   printf("%lld",A[j]); 
   
   printf(" ");
   
   for(j=0;j<strlen(s);j++)
   { if(B[j]==0 && c==0)
     continue;
     else
     {printf("%lld",B[j]);
      c=c+1;
     }
   }
   
   printf("\n");
   
  }    
    
    return 0;
}
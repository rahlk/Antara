#include<stdio.h>
#include<string.h>
#define ld long int
int main()
{

  int t,k;
  scanf("%d",&t);
  for(k=1;k<=t;k++)
  {
    int  i,r1=0,s1=0,p1=0,flag=0,ri,si,pi;
    int a;
    scanf("%d",&a);
    
    char Y[500],c[a][500];
    for(i=0;i<a;i++)
    {
         scanf("%s",c[i]);
    }
    for(i=0;i<a;i++)
    {
         if(c[i][0]=='R')
          {r1++;
           ri=i;
            // strcpy("") 
          }
         else if(c[i][0]=='P')
          {p1++;
           pi=i;
          }
         else if(c[i][0]=='S')
          {s1++;
           si=i;
          }
    }
    
     if(r1>0 && p1>0 && s1>0)
     {flag=1;}
     else if(r1>0 && p1>0 && s1==0)
     {
         strcpy(Y,c[pi]);
         strcat(Y,"S");
     }
     else if(r1>0 && p1==0 && s1>0)
     {   strcpy(Y,c[ri]);
         strcat(Y,"P");
     }
     else if(r1==0 && p1>0 && s1>0)
     {  strcpy(Y,c[si]);
         strcat(Y,"R");}
     else if(r1>0 && p1==0 && s1==0)
     { strcpy(Y,"P");}
     else if(r1==0 && p1>0 && s1==0)
     { strcpy(Y,"S");}
     else if(r1==0 && p1==0 && s1>0)
     { strcpy(Y,"R");}
     if(flag==1)
     {printf("Case #%d: IMPOSSIBLE\n",k);}
     else
      {printf("Case #%d: %s\n",k,Y);}
      
  }
    return 0;
}

#include<stdio.h>
#define ld long int
int main()
{

  int t,k;
  scanf("%d",&t);
  for(k=1;k<=t;k++)
  {
    int  i,r1=0,s1=0,p1=0,flag=0;
    ld a;
    scanf("%ld",&a);
    
    char Y,c[a][500];
    for(i=0;i<a;i++)
    {
         scanf("%s",c[i]);
    }
    for(i=0;i<a;i++)
    {
         if(c[i][0]=='R')
          {r1++;}
         else if(c[i][0]=='P')
          {p1++;}
         else if(c[i][0]=='S')
          {s1++;}
    }
    
     if(r1>0 && p1>0 && s1>0)
     {flag=1;}
     else if(r1>0 && p1>0 && s1==0)
     {flag=1;}
     else if(r1>0 && p1==0 && s1>0)
     {flag=1;}
     else if(r1==0 && p1>0 && s1>0)
     {flag=1;}
     else if(r1>0 && p1==0 && s1==0)
     { Y='P';}
     else if(r1==0 && p1>0 && s1==0)
     { Y='S';}
     else if(r1==0 && p1==0 && s1>0)
     { Y='R';}
     if(flag==1)
     {printf("Case #%d: IMPOSSIBLE\n",k);}
     else
      {printf("Case #%d: %c\n",k,Y);}
      
  }
    return 0;
}

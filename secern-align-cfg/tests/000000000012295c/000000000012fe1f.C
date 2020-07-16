#include<stdio.h>
#define ld long int
int main()
{

  int t,k;
  scanf("%d",&t);
  for(k=1;k<=t;k++)
  {
    ld  i,j,p,q,max1=0,max2=0,countx=0,county=0;
    scanf("%ld %ld",&p,&q);
    ld x[p],y[p],X,Y,l[p],r[p];
    char d[p];
    for(i=0;i<p;i++)
    {
         scanf("%ld %ld %c",&x[i],&y[i],&d[i]);
    }
    ld x1[100000]={0},y1[100000]={0};
    for(i=0;i<p;i++)
    {   
      if(d[i]=='N')
      {   // x1[x[i]]
          x1[x[i]]++;
          y1[y[i]+1]++;
          l[i] = x[i];
          r[i]  = y[i]+1;
      }
      //{ y[i] = y[i] + 1;}
      else if(d[i]=='S')
      {     //xy[x[i]]
            x1[x[i]]++;
           y1[y[i]-1]++;
          l[i] = x[i];
          r[i]  = y[i]-1;
      }
      //{ y[i] = y[i] - 1;}
      else if(d[i]=='E')
      { //xy[x[i]+1][y[i]]++;
           x1[x[i]+1]++;
           y1[y[i]]++;
          l[i] = x[i]+1;
          r[i]  = y[i];
      }
      //{ x[i] = x[i] + 1;}
      else if(d[i]=='W')
      { //xy[x[i]-1][y[i]]++;
          x1[x[i]-1]++;
          y1[y[i]]++;
          l[i] = x[i]-1;
          r[i]  = y[i];
      }
      //{ x[i] = x[i] - 1;}
      
    } 
   /* for(i=0;i<q;i++)
    {  for(j=0;j<q;j++)
      {  printf("%ld ",xy[i][j]);  //isko hatana hai
      }
      printf("\n");
        
    } */
     for(i=0;i<p;i++)
    {      
      // printf("people:%ld\n",xy[x[i]][y[i]]);//isko hata hai
      if(x1[l[i]]>max1)
      { max1 = x1[l[i]];
        X = l[i];
        
      }
      if(y1[r[i]]>max2)
      { max2 = y1[r[i]];
        
        Y = r[i];
      }
      
    }
    
    
    for(i=0;i<p;i++)
    {   
      if(d[i]=='N')
      {  county++;
            }
      if(d[i]=='E')
      {   countx++; }   }
     if(county==0)
     {  Y=0;  }
     if(countx==0)
     {  X=0;   }
      printf("Case #%d: %ld %ld\n",k,X,Y);
      
  }
    return 0;
}

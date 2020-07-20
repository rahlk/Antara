#include<stdio.h>
#define ld long int
int main()
{

  int t,k;
  scanf("%d",&t);
  for(k=1;k<=t;k++)
  {
    ld  i,j,p,q,max=0,countx=0,county=0;
    scanf("%ld %ld",&p,&q);
    ld x[p],y[p],X,Y,l[p],r[p];
    char d[p];
    for(i=0;i<p;i++)
    {
         scanf("%ld %ld %c",&x[i],&y[i],&d[i]);
    }
    ld xy[1000][1000]={0};
    for(i=0;i<p;i++)
    {   
      if(d[i]=='N')
      { xy[x[i]][y[i]+1]++;
          l[i] = x[i];
          r[i]  = y[i]+1;
      }
      //{ y[i] = y[i] + 1;}
      else if(d[i]=='S')
      { xy[x[i]][y[i]-1]++;
          l[i] = x[i];
          r[i]  = y[i]-1;
      }
      //{ y[i] = y[i] - 1;}
      else if(d[i]=='E')
      { xy[x[i]+1][y[i]]++;
          l[i] = x[i]+1;
          r[i]  = y[i];
      }
      //{ x[i] = x[i] + 1;}
      else if(d[i]=='W')
      { xy[x[i]-1][y[i]]++;
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
      if(xy[l[i]][r[i]]>max)
      { max = xy[l[i]][r[i]];
        X = l[i];
        Y = r[i];
      }
      for(i=0;i<X;i++)
       {  if(xy[l[i]][r[i]] == 0)  //xy[l[i]][r[i]] >= 0
            countx++;
       }
       if(countx==X)
          { X=0; }
       for(i=0;i<Y;i++)
       {  if(xy[l[i]][r[i]] == 0)  //xy[l[i]][r[i]] <= 0
            county++;
       }
       if(countx==Y)
          { Y=0; }
    }
      printf("Case #%d: %ld %ld\n",k,X,Y);
      
  }
    return 0;
}

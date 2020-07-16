#include<stdio.h>
int r,c,count;
int a[20][20];


void DFS(int ph[r][c],int r1,int c1)
{
  int i,j;
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
       if (!a[i][j]>0 && !(r1==i || j==c1 || r1-c1==i-j || i+j==r1+c1))
       {
          a[i][j]=count;
          ph[count][0]=i;
          ph[count++][1]=j;
          DFS(ph,i,j);
       }
      }
    }
}


int main()
{
  int t,i;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
    scanf("%d %d",&r,&c);
    int j,k,l,**v=a;
    int path[400][2];
    for(l=0;l<c;l++)
    {
    count=0;
      for(j=0;i<r;i++)
        for(k=0;k<c;k++)
          v[j][k]=0;
    DFS(path,1,l);
    if(count==r*c)
    {
      printf("Case #%d: POSSIBLE\n",t);
      for(j=0;j<count;j++)
        print("%d %d\n",path[j][0],path[j][1]);
    break;
    }
    else
      printf("Case #%d: IMPOSSIBLE\n",t);
    }
}
return 0;
}
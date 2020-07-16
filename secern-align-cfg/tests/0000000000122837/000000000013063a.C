# include <stdio.h>
# include <stdlib.h>
# include <math.h>
int main()
{
    int t;
    int w;
    scanf("%d  %d",&t,&w);
    int i;
    for(i=1;i<=t;i++)
    {
      int r1,r2,r3,r4,r5,r6;
      long d1,d2,d3,d4,d5,d6;
      printf("1\n");
      scanf("%ld",&d1);
      if(d1==-1)
      return 0;
      printf("2\n");
      scanf("%ld",&d2);
      if(d2==-1)
      return 0;
      printf("3\n");
      scanf("%ld",&d3);
      if(d3==-1)
      return 0;
      printf("4\n");
      scanf("%ld",&d4);
      if(d4==-1)
      return 0;
      printf("5\n");
      scanf("%ld",&d5);
      if(d5==-1)
      return 0;
      printf("6\n");
      scanf("%ld",&d6);
      if(d6==-1)
      return 0;
      d1*=(int)pow(2,63);
      d2*=(int)pow(2,63);
      d3*=(int)pow(2,63);
      d4*=(int)pow(2,63);
      d5*=(int)pow(2,63);
      d6*=(int)pow(2,63);
      r1=(4*d1-4*d2-2*d3+d6)/40;
      r2=d2-d1-2*r1;
      r3=d3-d2-4*r1;
      r4=d4-d3+2*d1-2*d2-4*r1;
      r5=d5-d4-16*r1;
      r6=4*d1-2*d2-2*d3-d5+d6-16*r1;
      printf("%d %d %d %d %d %d\n",r1,r2,r3,r4,r5,r6);
      int res;
      scanf("%d",&res);
      if(res==-1)
      return0;
      if(res==1)
      continue;
    }
      return 0;
}

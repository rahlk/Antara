#include<stdio.h>
#include<math.h>
int main()
{
    long i,sum=0,vf,vs,j;
    scanf("%d",&i);

    for(j=1,vf=i;vf>0;j++,vf=vf/10)
    {

      vs=vf%10;

      if(vs==4)
      {
          i=(i-(pow(10,(j-1))));

          sum =sum+(pow(10,(j-1)));
      }

    }

    printf("%d\n%d\n",i,sum);

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T;
	int R,C;
	int i,j,str,stc;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d\n",&R,&C);
        if(R==C)
		{
        printf("Case #1: IMPOSSIBLE\n");
        }
        printf("Case #2: POSSIBLE\n");
    str = R;
    stc = C-R;
for(i=str;i<R;i++)
{
 for(j=stc;j<C;j++)
 {
  printf("%d %d\n",i,j);
  j++;
  if(j==C)
  {
   j = 1;
  }
 }
}
}
return 0;
}

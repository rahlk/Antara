#include<stdio.h>
int main() {
  int T; 
  scanf("%d", &T);
  for (int id = 1; id <= T; ++id) 
  {
    int R, C,count=1,i=1,j=1,k=2,l=1;
    scanf("%d %d", &R, &C);
	if(R*C<=9)
		printf("Case #%d: IMPOSSIBLE\n",id);
	else
	{
		printf("Case #%d: POSSIBLE\n",id);
		printf("%d %d\n",i,j);
		while(count!=R*C)
		{
			if(i!=R)
			i++;
			else
			i=1;
			j+=2;
			if(j>C)
			{
			if(k!=0)
			j=k--;
			else
			{
			j=R;
			k=R;
			}
			}
			printf("%d %d\n",i,j);
			count++;
		}
	}
  }
  return 0;
}
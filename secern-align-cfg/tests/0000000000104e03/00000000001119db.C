#include<stdio.h>
int main() {
  int T; 
  scanf("%d", &T);
  for (int id = 1; id <= T; ++id) 
  {
    int R, C,count=1,i=2,j=3,k=2;
    scanf("%d %d", &R, &C);
	if(R*C<=9)
		printf("Case #%d: IMPOSSIBLE\n");
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
			j=((j+2)%C)+1;
			printf("%d %d\n",i,j);
			count++;
		}
	}
  }
    return 0;
}
#include<stdio.h>
int func(int N)
{
	while(N!=0)
	{
		if(N%10==4)
			return 0;
		N=N/10;
	}
	return 1;
}
int main() 
{
  int T; 
  scanf("%d", &T);
  for (int id = 1; id <= T; ++id) 
  {
	  int N,t;
	scanf("%d",&N);
	t=N;
	while(1)
	{
		if(func(N)==1&&func(t-N)==1)
		{
			printf("Case #%d: %d %d\n",id,N,t-N);
			break;
		}
		N--;
	}
  }
  return 0;
}
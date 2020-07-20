#include<stdio.h>
#include<math.h>
int main() 
{
  int T; 
  scanf("%d", &T);
  for (int id = 1; id <= T; ++id) 
  {
	  int N,t;
	  double sum=0,count=0;
	scanf("%d",&N);
	t=N;
	while(t!=0)
	{
		if(t%10==4)
			sum=sum+(3*pow(10,count));
		else
			sum=sum+(t%10)*pow(10,count);
		count++;
		t=t/10;
	}
	t=sum;
	printf("Case #%d: %d %d\n",id,t,N-t);
  }
  return 0;
}
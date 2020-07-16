#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int T;
	int R;
	int C; 
	int x[400];
	int y[400];
	int i;
	int j;
	
	scanf("%d",&T);
	
	for(i=0;i<T;i++)
	{
		scanf("%d %d",&R,&C);
				
		if(R<=3 && C<=3)
		{printf("Case #%d: IMPOSSIBLE\n",i+1);}
		else if(R==1 || C==1)
		{printf("Case #%d: IMPOSSIBLE\n",i+1);}
		else if( (R==2&C==4) || (R==4&C==2))
		{printf("Case #%d: IMPOSSIBLE\n",i+1);}
		else
		{
			printf("Case #%d: POSSIBLE\n",i+1);
			for(j=0;j<R*C;j++)
			{
				printf("%d %d\n",j%R+1,( j/R +2*( (j%R)%2==1 ) )%C+1);
			}
		}
		
	}
	
	return 0;
} 
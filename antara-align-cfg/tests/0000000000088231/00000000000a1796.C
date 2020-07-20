#include <stdio.h>

int main()
{
	int a,t,j=1;
	scanf("%d",&t);
	while(j <= t){
		scanf("%d",&a);
		int b = a;
		int c=0;
		int e = 0;
		int i = 0;
		while(b>0)
		{
			b = b/10;
			c++;
			
		}
		int d[c+1];
		c = c+1;
		for(i=c-1; i>0 ; i--)
		{
			//printf("i:%d\n",i);
			d[i] = a%10;
			if(d[i] == 4)
				e++;
			a= a/10;
		}
		//printf("error:%d\n",d[1]);
		//printf("e %d\n",e);
		//int v[e];
		/*for(i = 1; i < c ;i++)
		{
			printf("%d ",d[i]);
		}
		printf("\n");*/
		i = c -1;
		int vM=1;
		int A=0;
		while(e > 0)
		{
			
			if(d[i] == 4)
			{
				A = 2*vM + A;
				d[i] = d[i] - 2;
				e--;
			}
			vM = vM*10;
			i--;
		}
		
		/*for(i = 1; i < c ;i++)
		{
			printf("%d ",d[i]);
		}*/
		int B = 0;
		vM = 1;
		for (i=c-1; i > 0; i--)
		{
			B = d[i]*vM + B;
			vM = vM*10;
		}
		printf("Case #%d: %d %d\n",j,A,B);
		j++;
		
	}
	
}


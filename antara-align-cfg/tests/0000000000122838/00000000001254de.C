#include <stdio.h>
#include <stdlib.h>

#define ABS(X) ((X) < 0 ? -(X) : (X))

int sort_nums(const void *a, const void *b)
	{
	unsigned int aa=*((unsigned int *) a);
	unsigned int bb=*((unsigned int *) b);
	return aa-bb;
	}

int main(int argc,char *argv[])
	{
	unsigned int num_tests,t;
	unsigned int n,k,i,j,cw,dw,p;
	int c[100000];
	int d[100000];
	unsigned long result;

	scanf("%d",&num_tests);
	for(t=0;t<num_tests;t++)
		{
		scanf("%d %d",&n,&k);
		for(i=0;i<n;i++)
			{
			scanf("%d",&c[i]);
			}
		for(i=0;i<n;i++)
			{
			scanf("%d",&d[i]);
			}
		result=0;
		for(i=0;i<n;i++)
			{
			for(j=i;j<n;j++)
				{
				cw=dw=n;
				for(p=i;p<=j;p++)
					{
					if((cw==n)||(c[p]>c[cw]))
						{
						cw=p;
						}
					if((dw==n)||(d[p]>d[dw]))
						{
						dw=p;
						}
					}
				
				//fprintf(stderr,"-- %d/%d %d/%d %d/%d %d %d\n",i,j,c[cw],cw,d[dw],dw,ABS(c[cw]-d[dw]),k);
				
				if(ABS(c[cw]-d[dw])<=k)
					{
					//fprintf(stderr,"%d %d\n",i+1,j+1);
					result++;
					}
				}
			}
		
		printf("Case #%u: %d\n",t+1,result);
		}
	}

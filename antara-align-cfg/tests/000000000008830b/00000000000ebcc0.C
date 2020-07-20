#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x,y,num,z=25,alp, allp,v=0;
	for(int a=1;a<=n;a++)
	{
		scanf("%d %d",&x,&y);
		int ar1[y],ar2[26];
			for(int i = 0;i<y;i++)
		{
			scanf("%d",&ar1[i]);
			
		}
		for(int j=x;j>2;j--)
		{
			//printf("%d",x);
			num=0;
			for(int k=j;k>0;k--)
			{
				if(j%k==0)
				num++;
				if(num>2)
				break;
				
			}
			if(num==2)
			{
				ar2[z]=j;
				
				z--;
			}
			if(z<0)
			break;
		}
		
		printf("Case #%d: ",a);
		for(int i =0;i<y;i=i+2)
{
	
v=0;
			for(int j=0;j<26;j++)
			{ 
				//printf("%d",x);
				for(int k=0;k<26;k++)
				{
					//printf("%d",x);

					if(ar2[j]*ar2[k]==ar1[i] && v==0)
					{
						v=1;
					alp=j+65;
					allp=k+65;
					
				//printf("%d",x);

					printf("%c%c",alp,allp);
					

					
					//break;
				
					}
					//if(v==1)
					//break;
				}
				//if(v==1)
				//break;
			}
			
		}
		printf("\n");
	}
	
	return 0;
}
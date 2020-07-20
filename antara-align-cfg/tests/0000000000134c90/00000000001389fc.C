#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int t,r=1,A,i,x=0,y=0;
	int rf=0,pf=0,sf=0,F=0;
	char C[100][100];
	char M[100];
	scanf("%d",&t);
	M[0]="P";
	while(t>0)
	{
		scanf("%d",&A);
		for(x=0;x<A;x++)
		{
			scanf("%s",&C[x]);
		}
		x=y=0;
		for (i=0;i<500;i++)
		{
			while(x<A)
			{
			if (C[x][y]=="R")
			{
				rf=1;
				if(sf==0)
				{
					M[y]="P";
				}
				else
				{
					M[y]="R";
				}
				
			}
			else if (C[x][y]=="P")
			{
				pf=1;
				if(rf==0)
				{
					M[y]="S";
				}
				else
				{
					M[y]="P";
				}
			}
			else
			{
				sf=1;
				if(pf==0)
				{
					M[y]="R";
				}
				else
				{
					M[y]="S";
				}
			}
			x++;
			}
			if (rf==1&&pf==1&&sf==1)
			{
				F=1;
			}
			rf=pf=sf=0;
			x=0;
			y++;
		}
		t--;
		if (F==1)
		{
			printf("Case #%d: IMPOSSIBLE\n",r);
		}
		else
		{
		printf("Case #%d: %s\n",r,M);
		}
		r++;
		F=0;			
	}
}	
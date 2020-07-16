#include<stdio.h>
#include<string.h>
int main()
{
	int t,r=1,A,i,x=0,y=0;
	int rw=0,pw=0,sw=0;
	int rf=0,pf=0,sf=0,F=0;
	char C[256][500];
	char M[500];
	scanf("%d",&t);
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
			if (C[x][y]=='R')
			{
				rf=1;
				if(sf==0)
				{
					M[i]='P';
				}
				else
				{
					M[i]='R';
					if (M[i-1]=='R'&&rw==0)
					{
						rw=i-1;		
					}
				}
				
			}
			else if (C[x][y]=='P')
			{
				pf=1;
				if(rf==0)
				{
					M[i]='S';
				}
				else
				{
					M[i]='P';
					if (M[i-1]=='P'&&pw==0)
					{
						pw=i-1;		
					}
				}
			}
			else if (C[x][y]=='S')
			{
				sf=1;
				if(pf==0)
				{
					M[i]='R';
				}
				else
				{
					M[i]='S';
					if (M[i-1]=='S'&&sw==0)
					{
						sw=i-1;		
					}
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
		if (pw>rw)
		{
			if (pw<sw)
			{
				pw=sw;
			}
		}
		else
		{
			pw=rw;
			if (pw<sw)
			{
			 	pw=sw;
			}
		}
		if (F==1)
		{
			printf("Case #%d: IMPOSSIBLE\n",r);
		}
		else
		{
		printf("Case #%d: ",r);
		i=0;
		while(M[i]=='R'||M[i]=='P'||M[i]=='S' && (i<pw))
		{
			printf("%c",M[i]);
			i++;
		}
		printf("\n");
		}
		r++;
		F=0;			
	}
return 0;
}	

#include<stdio.h>
#include<string.h>

int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		int n,j,k;
		scanf("%d",&n);
		char l[n][501],a[500],c;
		for(j=0;j<n;j++)
		{
			scanf("\n%s",&l[j]);
		}
		for(j=0;j<500;j++)
		{
			int r=0,p=0,s=0;
			for(k=0;k<n;k++)
			{
				c = l[k][j];
				switch( c )
				{
					case 'R':
						r++;
						break;
					case 'S':
						s++;
						break;
					case 'P':
						p++;
						break;
				}
			}
			if( r!=0 && s!=0 && p!=0)
			{	
				strcat(a,"IMPOSSIBLE");
				break;
			}
			else if( r!=0 && s==0 && p==0)
				strcat(a,"P");
			else if( r==0 && s!=0 && p==0)
				strcat(a,"R");
			else if( r==0 && s==0 && p!=0)
				strcat(a,"S");
			else if ( r!=0 && s!=0 && p==0)
				strcat(a,"R");
			else if ( r==0 && s!=0 && p!=0)
				strcat(a,"S");
			else if( r!=0 && s==0 && p!=0)
				strcat(a,"P");
		}
		printf("Case #%d: %s\n",i,a);
		strcpy(a,NULL);
	}
	return 0;
}
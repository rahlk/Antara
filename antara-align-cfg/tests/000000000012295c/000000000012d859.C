#include<stdio.h>
#include<string.h>

int main()
{
	int t,l;
	scanf("%d",&t);
	for(l=0;l<t;l++)
	{
		long int p,q,i,j,k,max,maxi,maxj;
        scanf("%ld%ld",&p,&q);
        long int y[p],x[p],value[q+1][q+1];
        for(i=0;i<=q;i++)
            for(j=0;j<=q;j++)
                value[i][j]=0;
        char d[p],rand;
        for(i=0;i<p;i++)
        {
        	fflush(stdin);
            scanf("%ld%ld%c%c",&x[i],&y[i],&rand,&d[i]);
            //printf("%c\n",d[i]);   
        }
		max=0;	
		maxi=-1;
		maxj=-1;
        for(i=0;i<=q;i++)
        {
        	for(j=0;j<=q;j++)
        	{
        		for(k=0;k<p;k++)
        		{
        			if(d[k]=='E')
        			{
        				//printf("Avik1");
        				if(i>x[k])
        				    value[i][j]++;
					}
        			else if(d[k]=='W')
        			{
        				//printf("Avik2");
        				if(i<x[k])
        				    value[i][j]++;  
        		    }
        			else if(d[k]=='N')
        			{
        				//printf("Avik3\n");
        				if(j>y[k])
        				    value[i][j]++;
        			}
        			else if(d[k]=='S')
        			{
			            //printf("Avik4");
        				if(j<y[k])
        				    value[i][j]++;
        			}
        			//printf("%ld %ld %ld %c\n",i,j,value[i][j],d[k]);
				}
				if(value[i][j]>max)
				{
				    max=value[i][j];
				    maxi=i;
					maxj=j;   
				}
				else if(value[i][j]==max)
				{
					if(i<maxi)
					{
					    max=value[i][j];
					    maxi=i;
					    maxj=j;
					}
					else if(i==maxi)
					{
						if(j<maxj)
						{
					        max=value[i][j];
					        maxi=i;
					        maxj=j;	
					    }
					}
				}
				//printf("%ld %ld\n",maxi,maxj);
			}
		}
		printf("Case #%d: %ld %ld\n",l+1,maxi,maxj);
	}
	return 0;
}
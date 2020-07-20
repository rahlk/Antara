#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LL long long 
#define M 1000000007
int main()
{
	LL n,i,z,r,p,s,j,counter,k,t;
	scanf("%lld",&t);
	for(z=0;z<t;z++)
	{
		char tempchar;
		printf("Case #%lld: ",z+1);
		scanf("%lld%c",&n,&tempchar);
		char str[n][505],store[500];
		for(i=0;i<n;i++)
		{
			gets(str[i]);
		}
		counter=0;
		for(i=0;i<505;i++)
		{
			r=0,p=0,s=0;
			for(j=0;j<n;j++)
			{
			    if(str[j][i]=='R')
			    r=1;
			    else if(str[j][i]=='S')
			    s=1;
			    else if(str[j][i]=='P')
			    p=1;
			}
			if(r+s+p==3){
			printf("IMPOSSIBLE\n");
			break;
			}
			else if(r+p+s==2)
			{
			    if(r==1 && p==1)
			    {
			        store[counter]='P';
			        counter++;
			        for(k=0;k<n;k++)
			        {
			        	if(str[k][i]=='R')
			        	str[k][i+1]='\0';
					}
			    }
			    else if(r==1 && s==1)
			    {
			        store[counter]='R';
			        counter++;
			        for(k=0;k<n;k++)
			        {
			        	if(str[k][i]=='S')
			        	str[k][i+1]='\0';
					}
			    }
			    else if(s==1 && p==1)
			    {
			        store[counter]='S';
			        counter++;
			        for(k=0;k<n;k++)
			        {
			        	if(str[k][i]=='P')
			        	str[k][i+1]='\0';
					}
			    }
			}
			else
			{
			    if(r==1)
			    {
			        for(k=0;k<counter;k++)
			        printf("%c",store[k]);
					printf("P\n");
			        break;
			    }
			    if(p==1)
			    {
			        for(k=0;k<counter;k++)
			        printf("%c",store[k]);
					printf("S\n");
			        break;
			    }
			    if(s==1)
			    {
			        for(k=0;k<counter;k++)
			        printf("%c",store[k]);
					printf("R\n");
			        break;
			    }
			}
			if(counter==500)
			{
				printf("IMPOSSIBLE\n");
				break;
			}
		}
	}
}

#include<stdio.h>
#include<stdbool.h>
#define MAX 50005
int main()
{
	long prime[MAX], p=0, i, j, T, t, c[MAX], v[30], n, l;
	bool notPrime[MAX]={0};
	char text[MAX];
	for(i=2; i<MAX; i++)
		if(!notPrime[i])
		{
			prime[p++]=i;
			for(j=i; j<MAX; j+=i)
				notPrime[j]=true;
		}
	//for(i=0; i<p; i++)
		//cout<<prime[i]<<" ";
	
	scanf("%ld",&T);
	for(t=1; t<=T; t++)
	{
		scanf("%ld %ld",&n,&l);
		for(i=0; i<l; i++)
			scanf("%ld",c+i);
		
		j=0;
		for(p=0; prime[p]<=n; p++)
		{
			for(i=0; i<l && c[i]%prime[p]!=0; i++)
				;
			if(i<l)
				v[j++]=prime[p];
		}
		
		//for(i=0; i<j; i++)
			//printf("%ld ", v[i]);
		//printf("\n");
		//scanf("%ld",&i);/////////////////////
		for(i=1; i<l; i++)
			for(j=0; j<26; j++)
				if(c[i]%v[j]==0 && c[i-1]%v[j]==0)
				{
					text[i] = j+'A';
					break;
				}
		
		p = c[0]/v[text[1]-'A'];
		for(j=0; v[j]!=p; j++)
			;
		text[0] = j+'A';
		
		p = c[l-1]/v[text[l-1]-'A'];
		for(j=0; v[j]!=p; j++)
			;
		text[l] = j+'A';
		
		text[l+1]='\0';
		printf("Case #%ld: %s\n", t, text);
	}
	return 0;
}
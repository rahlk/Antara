#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LL long long 
#define M 1000000007
int main()
{
	LL n,i,z,r,p,s,j,counter,k,t,fr,fp,fs,ch;
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
			r=0,p=0,s=0,fr=0,fp=0,fs=0;
			for(j=0;j<n;j++)
			{
			    if(str[j][i]=='R'){
			    r=1;
			    fr++;}
			    else if(str[j][i]=='S'){
			    s=1;
			    fs++;}
			    else if(str[j][i]=='P'){
			    p=1;
			    fp++;}
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
			        	for(ch=i+1;ch<501;ch++)
			        	str[k][ch]='Z';
					}
			    }
			    else if(r==1 && s==1)
			    {
			        store[counter]='R';
			        counter++;
			        for(k=0;k<n;k++)
			        {
			        	if(str[k][i]=='S')
			        	for(ch=i+1;ch<501;ch++)
			        	str[k][ch]='Z';
					}
			    }
			    else if(s==1 && p==1)
			    {
			        store[counter]='S';
			        counter++;
			        for(k=0;k<n;k++)
			        {
			        	if(str[k][i]=='P')
			        	for(ch=i+1;ch<501;ch++)
			        	str[k][ch]='Z';
					}
			    }
			}
			else
			{
			    if(r==1)
			    {
			        for(k=0;k<counter;k++)
				    printf("%c",store[k]);
				    if(i>=1 && fr==1){
					printf("\n");
				    break;}
					else
					{
						printf("P\n");
				        break;
					}
			    }
			    if(p==1)
			    {
			        for(k=0;k<counter;k++)
			        printf("%c",store[k]);
			        if(i>=1 && fp==1){
					printf("\n");
				    break;}
					printf("S\n");
			        break;
			    }
			    if(s==1)
			    {
			        //printf("gggfg\n");
					for(k=0;k<counter;k++)
			        printf("%c",store[k]);
			        if(i>=1 && fs==1){
					printf("\n");
				    break;}
					printf("R\n");
				//	printf("ans%lld\n",fs);
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

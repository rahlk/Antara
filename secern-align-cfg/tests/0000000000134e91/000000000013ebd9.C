#include<stdio.h>
#include<stdlib.h>
int main()
{
	int j,t,f,zz,k,l,i,ar[5][30],br[5][30],cr[5][30],cnt[5],out[6];
	char x;
	scanf("%d %d",&t,&f);
	for(i=1;i<=t;i++)
	{
		for(j=0;j<5;j++)
			for(k=0;k<30;k++)
				ar[j][k]=br[j][k]=cr[j][k]=0;
		for(j=0;j<5;j++)
			cnt[j]=0;
		for(j=0;j<119;j++)
		{
			printf("%d\n",5*j+1);
			fflush(stdout);
			scanf("%c",&x);
			ar[x-65][cnt[x-65]++]=j;
		}
		j=0;
		while(cnt[j]!=23)
			j++;
		for(zz=0;zz<5;zz++)
			cnt[zz]=0;
		out[0]=j;
		for(k=0;k<23;k++)
		{
			printf("%d\n",ar[j][k]*5+2);
			fflush(stdout);
			scanf("%c",&x);
			br[x-65][cnt[x-65]++]=ar[j][k];
		}
		k=0;
		while(cnt[k]!=5)
			k++;
		for(zz=0;zz<5;zz++)
			cnt[zz]=0;
		out[1]=k;
		for(l=0;l<5;l++)
		{
			printf("%d\n",br[k][l]*5+3);
			fflush(stdout);
			scanf("%c",&x);
			cr[x-65][cnt[x-65]++]=br[k][l];
		}
		l=0;
		while(cnt[l]!=1)
			l++;
		for(zz=0;zz<5;zz++)
			cnt[zz]=0;
		out[2]=l;
		printf("%d\n",cr[l][0]*5+4);
		fflush(stdout);
		scanf("%c",&x);
		out[4]=x-65;
		if(out[0]!=0 && out[1]!=0 && out[2]!=0 && out[4]!=0)
			out[3]=0;
		else if(out[0]!=1 && out[1]!=1 && out[2]!=1 && out[4]!=1)
			out[3]=1;
		else if(out[0]!=2 && out[1]!=2 && out[2]!=2 && out[4]!=2)
			out[3]=2;
		else if(out[0]!=3 && out[1]!=3 && out[2]!=3 && out[4]!=3)
			out[3]=3;
		else if(out[0]!=4 && out[1]!=4 && out[2]!=4 && out[4]!=4)
			out[3]=4;
		for(j=0;j<5;j++)
		{
			printf("%c",out[j]+65);
		}
		printf("\n");
		fflush(stdout);
		scanf("%c",&x);
	}
}

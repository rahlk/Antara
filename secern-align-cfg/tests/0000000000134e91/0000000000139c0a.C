#include<stdio.h>
int main()
{
	int j,t,f,zz,k,l,i,ar[5][30]={0},br[5][10]={0},cr[5][10]={0},cnt[5]={0},out[6];
	char tmp;
	scanf("%d %d",&t,&f);
	for(i=1;i<=t;i++)
	{
		for(j=0;j<119;j++);
		{
			printf("%d\n",5*j+1);
			fflush(stdout);
			scanf("%c",&tmp);
			ar[tmp-97][cnt[tmp-97]++]=j;
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
			scanf("%c",&tmp);
			br[tmp-97][cnt[tmp-97]++]=ar[j][k];
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
			scanf("%c",&tmp);
			cr[tmp-97][cnt[tmp-97]++]=br[k][l];
		}
		l=0;
		while(cnt[l]!=1)
			l++;
		for(zz=0;zz<5;zz++)
			cnt[zz]=0;
		out[2]=l;
		printf("%d\n",cr[l][0]*5+4);
		fflush(stdout);
		scanf("%c",&tmp);
		out[4]=tmp-97;
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
			printf("%c",out[j]+97);
		}
		printf("\n");
		fflush(stdout);
		scanf("%c",&tmp);
	}
}

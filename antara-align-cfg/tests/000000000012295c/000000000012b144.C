#include <stdio.h>

int main() {

    int t;
    scanf("%d",&t);
    
    for(int i=1;i<=t;i++)
    {
        int p,q;
        scanf("%d %d",&p,&q);
        
        int x[p],y[p],flagx[q+1],flagy[q+1];
		char dir;
		for(int v=0;v<q+1;v++)
		{
		    flagx[v]=0;
		    flagy[v]=0;
		}
		for(int j=0;j<p;j++)
		{
			//cin>>x[i]>>y[i]>>dir;
			scanf("%d %d %c",&x[i],&y[i],&dir);
			if(dir=='N'&&y[i]<q)
			flagy[y[i]+1]++;
			if(dir=='S'&&y[i]>0)
			flagy[y[i]-1]++;
			if(dir=='W'&&x[i]>0)
			flagx[x[i]-1]++;
			if(dir=='E'&&x[i]<q)
			flagx[x[i]+1]++;
		}
		int maxx=0,maxy=0,xx=0,yy=0;
		for(int j=0;j<=q;j++)
		{
			if(flagx[j]>maxx)
			{xx=j;maxx=flagx[j];}
			if(flagy[j]>maxy)
			{yy=j;maxy=flagy[j];}
		}
		//cout<<"Case #"<<i<<": "<<xx<<" "<<yy<<endl; 
		printf("Case #");
		printf("%d",i);
		printf(": ");
		printf("%d %d\n",xx,yy);
    }
	return 0;
}
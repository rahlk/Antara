#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int T,N;
	scanf("%d",&T);
int x=1;
	
	while(x<=T)
	{
	scanf("%d",&N);
	char P[2*N-2];
	scanf("%s",P);
	char y[2*N-2];
	strcpy(y,"");

	int visited[N][N];
	for(int i=0;i<N;i++)
	for(int j=0;j<N;j++)
	visited[i][j]=0;
	int previ=0,prevj=0,curri=0,currj=0;
	for(int k=0;k<(2*N-2);k++)
	{
	    previ=curri;
	    prevj=currj;
	if(P[k]=='S')
	curri++;
	else if (P[k]=='E')
	      currj++;
    if(previ!=curri)
      visited[previ][curri]=1;
      else if(prevj!=currj)
      visited[currj][prevj]=1;
	}
	previ=0;
	prevj=0;
	curri=0;
	currj=0;
	while((curri<N-1)&&(currj<N-1))
	{
	    previ=curri;
	    prevj=currj;
	    currj++;
	    if(visited[currj][prevj]==1)
	    {
	    currj--;
	    curri++;
	    strcat(y,"E");
	    }
	    else strcat(y,"S");
	}
   while(curri<N-1)
{
curri++;
	    strcat(y,"E");
}
while(currj<N-1)
{

currj++;
	    
 strcat(y,"S");
}
	    printf("case#%d : %s",x,y);
	    x++;
	}
	
	
	
	return 0;
}



#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j,k,A[100],st[300][100],counts[100],countp[100],countr[100];
    char y[255];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
	scanf("%d",A[i]);
	for(j=0;j<A[i];j++)
	{ //  for(k=0;k!=200;k++)
	   scanf("%[^\n]",st[0][j]);
	    // gets(st[j]);
	}
    }
    for(i=0;i<T;i++)
    {
      //	for(j=0;j<A[i];j++)
	{
	   // for(k=0;k<strlen(st);k++)
	    //{
	    if(st[0][j]=='R')
	    {
		countr[i]++;
	    }
	    else
	    if(st[0][j]=='P')
	    {
		countp[i]++;

	    }
	    else
	    counts[i]++;
	//    }

	}
    }

    for(i=0;i<T;i++)
    {
       //	for(j=0;j<A[i];j++)
       /*	{
	    if(countp[i][j]==0 && countr[i][j]==0 && counts[i][j]!=0)
	    {
		printf("Case #%d: S",i+1);

	    }
	    else

	    if(countp[i][j]==0 && counts[i][j]==0 && countr[i][j]!=0)
	    {
		printf("Case #%d: R",i+1);

	    }
	    else

	    if(counts[i][j]==0 && countr[i][j]==0 && countp[i][j]!=0)
	    {
		printf("Case #%d: P",i+1);

	    }
	    else
	    {
		printf("Case #%d: IMPOSSIBLE",i+1);
	    }*/
	    if(countr[i]==0 && counts[i]==0 &&countp!=0)
	    {strcpy(y,"S");}
	    else
	     if(counts[i]==0 && countp[i]==0 &&countr!=0)
	    {strcpy(y,"P");}
	    else
	     if(countr[i]==0 && countp[i]==0 &&counts!=0)
	    {strcpy(y,"R");}
	    else
	    strcpy(y,"IMPOSSIBLE");
	    printf("Case #%d: %s",i+1,y);
	}
    }

#include<stdio.h>


int main()

{

int T,i,j;

int N[100];

char S[100][1000],Res[100][1000];



scanf("%d",&T);

for(i=0;i<T;i++)

{

    scanf("%d",&N[i]);

    scanf("%s",S[i]);

}
for(i=0;i<T;i++)
{
    int XL=0,YL=0;
    int X=0,Y=0,value = 1;
    for(j=0;j<2*(N[i]-1);j++)
    {
	if(XL-X == 0 && YL-Y == 0)
	  value = 0;
	else
	  value = 1;
	if(value == 0)
	{
	  if(S[i][j] == 'E')
	  {
	    Y++;
	    XL++;
	    Res[i][j] = 'S';
	  }
	  else
	  {
	    YL++;
	    X++;
	    Res[i][j] = 'E';
	  }
	}
	else
	{
	  if(X >= Y)
	  {
	    Y++;
	    Res[i][j] = 'S';
	  }
	  else
	  {
	    X++;
	    Res[i][j] = 'E';
	  }
	  if(S[i][j] == 'E')
	    XL++;
	  else
	    YL++;
	}
    }
    printf("Case #%d: %s\n",i+1,Res[i]);
}

return 0;
}
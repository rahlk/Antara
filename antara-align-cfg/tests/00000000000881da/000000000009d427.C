#include<stdio.h>


int main()

{

int T,i,j;

long int N[100];

char S[100],Res[100];


scanf("%d",&T);

for(i=0;i<T;i++)

{

    scanf("%ld",&N[i]);

    scanf("%s",S);

}
for(i=0;i<T;i++)
{
    int XL=0,YL=0;
    int X=0,Y=0,value = 1;
    for(j=0;j<2*(N[i]-1);j++)
    {
	if(XL-X == 0 && YL-Y ==0)
	  value = 0;
	else
	  value = 1;
	if(value == 0)
	{
	  if(S[j] == 'E')
	  {
	    Y++;
	    XL++;
	    Res[j] = 'S';
	  }
	  else
	  {
	    YL++;
	    X++;
	    Res[j] = 'E';
	  }
	}
	else
	{
	  if(X >= Y)
	  {
	    Y++;
	    Res[j] = 'S';
	  }
	  else
	  {
	    X++;
	    Res[j] = 'E';
	  }
	  if(S[j] == 'E')
	    XL++;
	  else
	    YL++;
	}
    }
}
printf("\n%s",Res);
return 0;
}
#include <stdio.h>
#include <string.h>

void inverse(char * a, int n)
{

  int i;

  for(i=0;i<2*n-2;i++)
    {
	if(a[i]=='E') a[i]='S';
	else a[i]='E';
    }

}

int main(int argc, char ** argv)
{

  int T,i,j,n;
  char c[100000];

  scanf("%d",&T);

  for(i=1;i<=T;i++)
    {
	scanf("%d",&n);
	scanf("%s",c);
	printf("Case #%d: ",i);

	inverse(c,n);

	printf("%s\n",c);

	



    }

  return(0);
}
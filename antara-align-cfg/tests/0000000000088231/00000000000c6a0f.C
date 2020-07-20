#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int quatre(unsigned long long v)
{
  char c[101];
  int i,t;
  sprintf(c,"%lld",v);

  t=strlen(c);
  
  for(i=0;i<t;i++)
    {
	if(c[i]=='4') return(1);
    }

  return(0);
}

int main(int argc, char ** argv)
{

  int T,i; unsigned long long n,a,b;
  srand(time(NULL));

  scanf("%d",&T);

  for(i=1;i<=T;i++)
    {
	scanf("%lld",&n);
	printf("Case #%d: ",i);

        do {
	a=(rand()%(n-1))+1;
	b=n-a; }
        while(quatre(a) || quatre(b));
	
	printf("%lld %lld\n",a,b);

    }

  return(0);
}
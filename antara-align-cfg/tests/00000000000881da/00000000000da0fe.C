
#include<stdio.h>
int main()
{
	int j,i,T,N,P;
	char a[50000];
	scanf("%d",&T);
	for(j=1; j<=T; j++){
	   scanf("%d",&N);
	   P = 2*N - 2;
	   scanf("%s",a);
	   for( i=0; i < P; i++){
		   if(a[i]=='S')
		        a[i] = 'E';
		    else
			    a[i] = 'S';
	   }
	printf("Case #%d: %s\n",j,a);
	}
return 0;
}


/*#include<stdio.h>
int main()
{
	int j,i,T,N,P,c=0;
	char a[50000];
	scanf("%d",&T);
	for(j=1; j<=T; j++)
	{
	    c=0;
	scanf("%d",&N);
	P = 2*N - 2;
	scanf("s",&a);
	for( i=0; i < P; i++)
	{
		//printf("\n%c",a[i]);
		if(a[i]=='S')
			{
			       c++;
			       a[i] = 'E';
			}
		else
			{
			    a[i] = 'S';
			}
		//printf("\t%c",a[i]);	
	}
	if( c==P/2 )
	    printf("Case #%d: %s",j,a);
	else
	    return;
	}
	return 0;
}*/


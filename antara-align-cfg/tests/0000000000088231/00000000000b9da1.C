#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cases,h,i,j,solved;
long long int N,A,B,a,b;
char *As;
char *Bs;

char *my_itoa(long long int,char*);

int main()
{
    fscanf(stdin,"%d",&cases);
	for(h=1;h<=cases;h++)
	{
		solved=0;
		fscanf(stdin,"%lld",&N);
		for(i=1;i<N;i++)
		{
			if(solved==1) break;
			a=i;
			b=N-i;
			As = (char*) malloc(10 * sizeof(char));
			Bs = (char*) malloc(10 * sizeof(char));
			my_itoa(a,As);
			if(strchr(As,'4')==NULL)
				{
					my_itoa(b,Bs);
					if(strchr(Bs,'4')==NULL)
					{
					    A=a;
					    B=b;
					    solved = 1;		
					}
				}
				free(As);
				free(Bs);
		}
		fprintf(stdout,"Case #%d: %lld %lld\n",h,A,B);
	}
	return 0;
}

char *my_itoa(long long int num, char *str)
{
        sprintf(str, "%lld", num);
        return str;
}

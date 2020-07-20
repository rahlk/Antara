#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cases,h,i,j,solved;
int N,A,B;
char *As;
char *Bs;

char *my_itoa(int,char*);

int main()
{
    fscanf(stdin,"%d",&cases);
	for(h=1; h<=cases; h++)
	{
		solved=0;
		fscanf(stdin,"%d",&N);
		for(i=1; i<N; i++)
		{
			if(solved == 1) break;
			A = i;
			B = N-i;
			As = (char*) malloc(10 * sizeof(char));
			my_itoa(A,As);
			if(strchr(As,'4') == NULL)
				{
					Bs = (char *) malloc(10*sizeof(char));
					my_itoa(B,Bs);
					if(strchr(Bs,'4') == NULL)
					{
					    solved = 1;		
					}
					free(Bs);
				}
			free(As);
//test			fprintf(stdout,"Case #%d: %d %d\n",h,A,B);
		}
		fprintf(stdout,"Case #%d: %d %d\n",h,A,B);
	}
	return 0;
}

char *my_itoa(int num, char *str)
{
        sprintf(str, "%d", num);
        return str;
}

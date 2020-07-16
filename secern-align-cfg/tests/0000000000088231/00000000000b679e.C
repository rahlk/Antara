#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cases,h,i,j,solved;
long int N,A,B,a,b;
char *As;

char *Bs;

char *my_itoa(int,char*);

int main()
{
	fscanf(stdin,"%d",&cases);
	for(h=1;h<=cases;h++)
	{
		solved=0;
		fscanf(stdin,"%ld",&N);
		for(i=1;i<N;i++)
		{
				if(solved==1) break;
				a=i;
				b=N-i;
	                        As = (char*) malloc(10 * sizeof(char));
				Bs = (char*) malloc(10 * sizeof(char));
				my_itoa(a,As);
				if(!strchr(As,'4'))
				{
					my_itoa(b,Bs);
					if(!strchr(Bs,'4'))
					{
						A=a;
						B=b;
						solved = 1;		
					}
				}
				free(As);
				free(Bs);
		}
		fprintf(stdout,"Case #%d: %ld %ld\n",h,A,B);
	}
	return 0;
}

char *my_itoa(int num, char *str)
{
        if(str == NULL)
        {
                return NULL;
        }
        sprintf(str, "%d", num);
        return str;
}

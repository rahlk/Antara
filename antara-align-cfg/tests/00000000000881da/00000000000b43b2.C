#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
	{
	unsigned int num_tests,t;
	char buf[50];
	char *input,*i;
	unsigned int n,size;

	fgets(buf,50,stdin);
	sscanf(buf,"%u",&num_tests);
	for(t=0;t<num_tests;t++)
		{
		fgets(buf,50,stdin);
		sscanf(buf,"%u",&n);
		size = (2*n)-2;
		input=malloc(size+2);
		fgets(input,size+2,stdin);
		for(i=input;(*i!='\0')&&(*i!='\n');i++)
			{
			if(*i=='S')
				{
				*i='E';
				}
			else
				{
				*i='S';
				}
			}
		*i='\0';
		
		printf("Case #%u: %s\n",t+1,input);
		free(input);
		}
	}

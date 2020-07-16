#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
	{
	unsigned int num_tests,t;
	char inbuf[105];
	char outbuf1[105];
	char outbuf2[105];
	char *i,*o1,*o2;

	fgets(inbuf,100,stdin);
	sscanf(inbuf,"%d",&num_tests);
	for(t=0;t<num_tests;t++)
		{
		fgets(inbuf,100,stdin);
		for(i=inbuf,o1=outbuf1,o2=outbuf2;(*i!='\0')&&(*i!='\n');i++,o1++)
			{
			if(*i=='4')
				{
				*o1='2';
				*o2='2';
				o2++;
				}
			else
				{
				*o1=*i;
				if(o2!=outbuf2)
					{
					*o2='0';
					o2++;
					}
				}
			}
		*o1='\0';
		*o2='\0';
		printf("Case #%u: %s %s\n",t+1,outbuf1,outbuf2);
		}
	}

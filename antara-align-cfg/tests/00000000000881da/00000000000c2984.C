#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
void reverse(char *string,long int high,long int low)
{
    for (long int k=high;k>=low;k--)
    {
        printf("%c",string[k]);
    }
}
int main()
{
    unsigned long int Test;
    unsigned long int str;
    long int Ecount=0,Scount=0;
    char direction[1000];
    scanf("%ld",&Test);
    for (long int i=0;i<Test;i++)
    {
	long int m,l=0;
        scanf("%ld",&str);
	getchar();
	        fgets(direction,1000,stdin);
      		long int length=strlen(direction);
		printf("Case #%ld ",i+1);
        	for (long int j=0;j<length;j++)
        	{
            		if (direction[j]=='E')
            		{
                		Ecount++;
            		}
            		if (direction[j]=='S')
            		{
                		Scount++;
            		}
            		if (Ecount==Scount&&Ecount!=0&&Scount!=0)
            		{
                		m=j;
                		reverse(direction,m,l);
                		l=m+1;
            		}
        	}
    }
    return 0;
}

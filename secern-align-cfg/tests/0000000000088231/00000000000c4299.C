#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void solver(int casenum)
{
	char c[100],cp[100];
	int identifier=0;
	scanf("%s",c);
	strcpy(cp,c);
	for(int i=0;i<(int)strlen(c);i++)
	{
	    if(c[i]=='4')
	        c[i]='2';
	    if(cp[i]=='4')
	        cp[i]='2';
	    else
	        cp[i]='0';
	}
	printf("case #%d: ",casenum);
	for(int i=0;i<(int)strlen(cp);i++)
	    printf("%c",c[i]);
	printf(" ");
	for(int i=0;i<(int)strlen(cp);i++)
	{
        if(cp[i]!='0')
        identifier=1;
        if(identifier==1)
        printf("%c",cp[i]);
        if(identifier==0 && i==(int)strlen(cp)-1)
        printf("%c",'0');
	}
	printf("\n");
	
}
void main()
{
	int tests;
	scanf("%d",&tests);
	for(int i=0;i<tests;i++)
		solver(i+1);
}
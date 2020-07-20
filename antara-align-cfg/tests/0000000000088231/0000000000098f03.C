#include <stdio.h>

int main() {
	int count,temp;
	char c;
	char a[150],b[150];
	int aindex,bindex;
	scanf("%d",&count);
	getchar();
	for(int i=1;i<=count;i++)
	{
	    aindex=0;
	    bindex=0;
	c=getchar();
	//For first digit only
	if(c=='1')
	{
	    a[aindex]='1';
	    aindex++;
	    c=getchar();
	}
	
	while(c!='\n'&&c!=EOF)
	{
	   // printf("READ #%c#",c);
	    if(c=='1')
	    {
	    a[aindex]='1';
	    b[bindex]='0';
	    } 
	    else if(c=='2')
	    {
	    a[aindex]='1';
	    b[bindex]='1';
	    } 
	    else if(c=='3')
	    {
	    a[aindex]='2';
	    b[bindex]='1';
	    } 
	    else if(c=='4')
	    {
	    a[aindex]='2';
	    b[bindex]='2';
	    } 
	    else if(c=='5')
	    {
	    a[aindex]='3';
	    b[bindex]='2';
	    } 
	    else if(c=='6')
	    {
	    a[aindex]='3';
	    b[bindex]='3';
	    } 
	    else if(c=='7')
	    {
	    a[aindex]='2';
	    b[bindex]='5';
	    } 
	    else if(c=='8')
	    {
	    a[aindex]='3';
	    b[bindex]='5';
	    } 
	    else if(c=='9')
	    {
	    a[aindex]='3';
	    b[bindex]='6';
	    } else if(c=='0')
	    {
	    a[aindex]='0';
	    b[bindex]='0';
	    }
	    aindex++;
	    bindex++;
	    //printf("#aindex:%d#",aindex);
	    c=getchar();
	}
	a[aindex]='\0';
	b[bindex]='\0';
	printf("Case #%d: %s %s\n",i,a,b);
	}
	return 0;
}
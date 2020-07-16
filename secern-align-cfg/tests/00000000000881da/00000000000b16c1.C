#include<stdio.h>
int main()
{
    int t,i,j,k;
    long unsigned int n;
    char d[200000];
    char c[200000];
    scanf("%d", &t)==1;
    for(i=0;i<t;i++)
    {
        scanf("%lu",&n)==1;
	
//		for(j=0;j<1;j++)
	//{
            scanf("%s",d)==1;
	    for(k=0;d[k]!='\0';k++)
	    {
            	if(d[k]=='S')
            	{
                	c[k]='E';
                	
            	}
            	else
            	{
                	c[k]='S';
                
            	}
       	    }
	//}
		printf("Case #%d: %s \n",i+1,c);
    }
	return 0;
}
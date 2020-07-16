#include<stdio.h>
void main()
{
    int k,t,n,i,j=0;
    char c[100][1000],d[100][1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    	scanf("%d",&n);
        scanf("%s",&c[i]);
	}
    while(j<t)
    {
        k=0;
        while(c[j][k]!='\0')
        {
            if(c[j][k]=='S')
                d[j][k]='E';
            else
                d[j][k]='S';
            k++;
        }
        d[j][k]='\0';
        printf("Case #%d: %s\n",j+1,d[j]);
        j++;
    }
}
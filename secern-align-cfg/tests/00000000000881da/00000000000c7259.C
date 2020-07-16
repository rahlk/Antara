#include <stdio.h>

int main() {
	int T,N,i,j=0;
	char P[1000],temp[1000];
	scanf("%d\n",&T);
	for(i=0;i<T;i++)
	{
	    scanf("%d\n",&N);
	    scanf("%s\n",P);
	    j=0;
	    temp[j]='\0';
	    while(P[j]!='\0')
	    {
	        if(P[j] == 'S')
	        {
	            temp[j] = 'E';
	            j++;
	        } else if(P[j] == 'E')
	        {
	            temp[j] = 'S';
	            j++;
	        }
	    }temp[j]='\0';
	    printf("Case #%d: %s\n",i+1,temp);
	}
	return 0;
}
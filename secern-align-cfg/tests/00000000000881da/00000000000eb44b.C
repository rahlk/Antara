#include<stdio.h>
int main(void)
{
    int T,t;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int N,i=0;
        scanf("%d",&N);
        char P[2*N-2];
        scanf("%s",P);
        printf("Case #%d: ",t);
        while(1)
        {
        	if(P[i]!='E')
        	{
        		i++;
        		printf("E");
			}
			if(P[i]!='S')
			{
				i++;
				printf("S");
			}
			if(i==2*N-2) break;
		}
        
        printf("\n");
    }
    return 0;
}
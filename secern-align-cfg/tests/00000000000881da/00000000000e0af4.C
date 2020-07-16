#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T, N, i, j;
	char *P, *str1;
    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        scanf("%d",&N);
		P  = (char *)malloc(2*N-2);
		str1  = (char *)malloc(2*N-2);
		
		for(j=0; j<(2*N-2); j++)
        {
            scanf(" %c", &P[j]);
            if(P[j]=='E')
            {
                str1[j] = 'S';
            }
			else if(P[j]=='e')
			{
				str1[j] = 's';
			}
            else if(P[j]=='S')
            {
                str1[j]='E';
            }
			else if(P[j]=='s')
			{
				str1[j] = 'e';
			}
        }
    }
    for(j=0; j<(2*N-2); j++)
    {
        printf("%c", str1[j]);
    }
    return 0;
}

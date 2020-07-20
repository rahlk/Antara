#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t, n, i, j;
	char *str, *str1;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
		str  = (char *)malloc(2*n-2);
		str1  = (char *)malloc(2*n-2);
		
		for(j=0; j<(2*n-2); j++)
        {
            scanf(" %c", &str[j]);
            if(str[j]=='E')
            {
                str1[j] = 'S';
            }
			else if(str[j]=='e')
			{
				str1[j] = 's';
			}
            else if(str[j]=='S')
            {
                str1[j]='E';
            }
			else if(str[j]=='s')
			{
				str1[j] = 'e';
			}
        }
    }
    for(j=0; j<(2*n-2); j++)
    {
        printf("%c", str1[j]);
    }
    return 0;
}

#include<stdio.h>

int main()
{
	int t, i, len, firstOccur, gate ;
	char ch[102], a[102] ;
	scanf("%d", &t) ;
	scanf("%c", &ch[0]) ;
	while(t--)
	{
		firstOccur = -1 ;
		for(i = 0 ; i < 102 ; i++)
		{
			a[i] = '*' ;
		}

		i = 0 ;
		gate = 1 ;
		do
		{
			scanf("%c", &ch[i]) ;
			if(ch[i] == '4')
			{
				a[i] = '^' ;
				if(gate)
				{
					firstOccur = i ;
					gate = 0 ;
				}
			}

			i++ ;
		}while(ch[i-1] != '\n') ;
		len = i-1 ;
		printf("Case #1: ") ;
		for(i = 0 ; i < len ; i++)
		{
			if(ch[i] == '4')
				printf("2") ;
			else
				printf("%c", ch[i]) ;
		}

		printf(" ") ;
		for(i = firstOccur ; i < len ; i++)
		{
			if(a[i] == '^')
				printf("2") ;
			else
				printf("0") ;
		}
		printf("\n") ;
	}
	return 0 ;
}

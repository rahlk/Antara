#include <stdio.h>
#include <stdlib.h>
int main()
{
	int input , array[20] , temp , count = 0 , i = 0 , j = 0 , pos[20] , check1 = 0 , check2 = 0;
	scanf("%d",&input);
	temp=input;
	printf("%d\n",temp );
	while(temp !=0 )
	{
		array[i] = temp%10;
		temp = temp/10;
		//printf("array[%d] = %d temp = %d\n",i,array[i],temp);
		//printf("i=%d c=%d\n",i,count);
		if (array[i] == 4 )
		{
			array[i] = 1;
		}
		//printf("array[%d] = %d c = %d\n",i,array[i],count);
		i++;
		if ( temp != 0)
		{
			count++;
		}
	}
	printf("\n\n");
	for (i = 0; i < count+1; i++)
	{
		//printf("count-i%d\n",count-i);
		check1 = check1*10 + array[count-i];
		//printf("check1[%d]%d\n",count-i,check1);
	}

	check2 = input - check1;

	if (check2!=0)
	{
		printf("%d %d\n",check1,check2);
	}

	else
	{
		printf("%d\n",check1);
	}
}
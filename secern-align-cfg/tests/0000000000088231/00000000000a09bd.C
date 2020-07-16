#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
   int t;
   scanf("%d", &t);
   getchar();
    for(int j=0; j<t; j++)
    {
        char en[100];
		//memset (en,NULL,sizeof(en));
		int n;
        gets(en);
        n = strlen(en);
        char primary[n],secondary[n];
        for(int i=0 ; i<n;i++)
        {
            if(en[i]==52)
            {
                primary[i]=51;
                secondary[i]=49;
            }
            else
            {
                primary[i]=en[i];
                secondary[i]=48;
            }
        }
		printf("Case #%d: ", j+1);
        for(int i=0;i<n;i++)
		{
			printf("%c",primary[i]);
		}
		printf(" ");
		for(int i=0;i<n;i++)
		{
			printf("%c",secondary[i]);
		}
		printf("\n");
    }
    return 0;
}
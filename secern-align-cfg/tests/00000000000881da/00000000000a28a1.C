#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int j=0; j<t; j++)
    {
        long int n,k,i;
        scanf("%d",&n);
		getchar();
        k=((2*n)-2);
        char p[k];
        gets(p);
        for(i=0;i<k;i++)
        {
            if(p[i]=='S')
            {
                p[i]='E';
            }
            else
            {
                p[i]='S';
            }
        }
        printf("Case #%d: ",j+1);
        for(int i=0;i<k;i++)
		{
			printf("%c",p[i]);
		}
		printf("\n");
    }
    return 0;
}
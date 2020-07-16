#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,r,c,i,j,str,stc;
    //printf("Enter Number of Test Cases :: ");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d\n",&r ,&c);
        if(r==c){
        printf("Case #1: IMPOSSIBLE\n");
        }
        printf("Case #2: POSSIBLE\n");
str = r;
stc = c-r;
for(i=1;i<r;i++)
{
	for(j=1;j<c;j++)
	{
		printf("%d %d\n",str,stc);
		stc = stc + 1;
		if(stc==c)
		{
			stc = 1;
		}
	}
}
}
return 0;
}
	      
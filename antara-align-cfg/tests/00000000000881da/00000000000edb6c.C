#include<stdio.h>
#include<malloc.h>

void direction()
{
    char *p,*q;

    int N,l;
        scanf("%d",&N);
        p = (char *)malloc((2*N-2) * sizeof(char));
        q = (char *)malloc((2*N-2) * sizeof(char));
        printf("\n Enter the direction ");
        scanf("%s",p);
	   for(l=0;p[l]!='\0';l++)
        {
        	if(*(p+l)=='S')
        		*(q+l)= 'E';
        	else if(*(p+l)=='E')
        		*(q+l)='S';
		}
		*(q+l)='\0';
        puts(q);
}

int main()
{
    int T,i,k;
    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
    	direction();
    }


    return 0;

}

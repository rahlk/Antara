#include<stdio.h>
#include<stdlib.h>
int main()
{
	int T,i,j,N,ptr1_i,ptr1_j,ptr2_i,ptr2_j;
	char *str1,*str2;
	setbuf(stdout,NULL);	
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%d",&N);
		str1=malloc(sizeof(char)*2*N);
		str2=malloc(sizeof(char)*2*N);
		scanf("%s",str1);
		if(str1[0]=='S')
		{
			ptr1_i=0;
			ptr1_j=1;
			str2[0]='E';
			ptr2_i=1;
			ptr2_j=0;
		}
		else
		{
			ptr1_i=1;
			ptr1_j=0;
			str2[0]='S';
			ptr2_i=0;
			ptr2_j=1;
		}
		for(j=1;j<2*N-2;j++)
		{
			if(str1[j]=='S')
				ptr1_j++;
			else
				ptr1_i++;
				if(ptr1_j<N-1 && ptr1_i<N-1)
				{
					if(str1[j]=='S')
					{
						ptr2_i++;
						str2[j]='E';
					}
					else
					{
						ptr2_j++;
						str2[j]='S';
					}
				}
				else if(ptr1_i==N-1)
				{
					while(ptr2_j<N-1)
					{
						ptr2_j++;
						str2[j++]='S';
					}
					while(ptr2_i<N-1)
					{
						ptr2_i++;
						str2[j++]='E';
					}
					break;	
				}
				else
				{
					while(ptr2_i<N-1)
					{
						ptr2_i++;
						str2[j++]='E';
					}
					while(ptr2_j<N-1)
					{
						ptr2_j++;
						str2[j++]='S';
					}
					break;	
				}
				
		}
		str2[2*N-2]='\0';
		printf("Case #%d: %s\n",i,str2);
		free(str1);
		free(str2);
	}
	return 0;
}

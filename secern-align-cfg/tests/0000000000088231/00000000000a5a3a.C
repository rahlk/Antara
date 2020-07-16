#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
 int T, i, j, k, h;
 char N[109], A[109], B[109], temp;
 scanf("%d",&T);
 for(i=1;i<=T;i++)
 {
 	memset(A,0,sizeof(A));
 	memset(B,0,sizeof(B));
 	
	getchar();
	scanf("%s",N);

 	j = strlen(N);

 	for(k=0;k<(j/2+j%2);k++)
 	{
 		temp = N[k] - '0';
 		N[k] = N[j-1-k] - '0';
 		N[j-1-k] = temp;
 	}
 	for(k=0;k<j;k++)
 	{
 		if(N[k] == 4)
 		{    
 		    A[k]=1;
 		    B[k]=3;
 		}
 		else
 		{
 		    A[k]=0;
 		    B[k]=N[k];
 		}
 		    
 	}
 	printf("Case #%d: ",i);
    for(j=108; B[j] == 0; j--);
    for(k=j;k>=0;k--)
        printf("%d",B[k]);
    printf(" ");
    for(; A[j] == 0; j--);
    for(k=j;k>=0;k--)
        printf("%d",A[k]);
    printf("\n");
 } 
 

 return 0;
}

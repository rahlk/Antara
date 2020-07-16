#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
 int T, i, j, k, h, jinwei;
 char N[109], A[109], B[109], temp;
 scanf("%d",&T);
 for(i=1;i<=T;i++)
 {
 	memset(A,0,sizeof(A));
 	memset(B,0,sizeof(B));
 	jinwei = 0;
	getchar();
	scanf("%s",N);

 	j = strlen(N);

 	for(k=0;k<(j/2+j%2);k++)
 	{
 		temp = N[k] - '0';
 		N[k] = N[j-1-k] - '0';
 		N[j-1-k] = temp;
 	}
 	for(k=0;k<j-1;k++)
 	{
 		N[k] = N[k]+jinwei;
 		jinwei = 0;
 		if(N[k] < 2)
 		{
 			jinwei = -1;
 			N[k] += 10;
 		}
 		h = N[k]/2;
 		while(h == 4 || N[k]-h == 4)
 			h++;
 		A[k] = h;
 		B[k] = N[k]-h;
 	}
 	N[k] = N[k]+jinwei;
 	if(N[k] == 0)
 	{
 		A[k] = 0;
 		B[k] = 0;
 	}
 	else
 	{	
 	h = 1;
 	while(h == 4 || N[k]-h == 4)
 		h++;
 	A[k] = h;
 	B[k] = N[k]-h;
    }
 	
 	
 	printf("Case #%d: ",i);
    for(j=108; A[j] == 0; j--);
    for(k=j;k>=0;k--)
        printf("%d",A[k]);
    printf(" ");
    for(; B[j] == 0; j--);
    for(k=j;k>=0;k--)
        printf("%d",B[k]);
    printf("\n");
 } 
 

 return 0;
}

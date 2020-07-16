#include<stdio.h>
void main()
{
    int i,N,j;
    printf("enter the cube size\n");
    scanf("%d",&N);
    char s[2*N-2];
    printf("enter the lydia's path\n");
    printf("the path must be enter in the uppercase \n");
    scanf("%s",&s);
    j=0;
    for(i=0;i<(2*N-2);i++){
        if(s[i]=='E'&&N/2>j)
        {
            printf("S");
            j++;
        }
        else
        printf("E");
    }
    
}
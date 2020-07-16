#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
    int n,*ptr,a,b,x,rem,i=0,y;
    char array[10];
    printf("Enter the number of testcases : ");
    scanf("%d",&n);
    ptr = (int*) malloc(n * sizeof(int));
    if(ptr == NULL)                     
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter testcases: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
    }
    for(i=0;i<n;++i)
    {
        x=*(ptr+i);
        
        
        sprintf( array, "%d",x);
       
        int j=0;
        while(j!=strlen(array)+1)
        {
            if (array[j]==52)
            {
                array[j]=50;
            }
           j++;
        }
        sscanf(array, "%d", &y);
        a=y;
        b=x-y;
        printf("Case #%d : %d %d\n",i+1,a,b);
    }
    
}
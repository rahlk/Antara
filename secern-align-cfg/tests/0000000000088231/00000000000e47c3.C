#include <stdio.h>

#include <stdlib.h>

#include <string.h>



void main()

{

    int n,rem,i=0;

    unsigned long x,ptr[150],a,b,y;

    char array[150];

    printf("Enter the number of testcases : ");

    scanf("%d",&n);


    printf("Enter testcases: ");

    for(i = 0; i < n; i++)

    {

        scanf("%lu", &ptr[i]);

    }

    for(i=0;i<n;i++)

    {

        x=ptr[i];

        
sprintf( array, "%lu",x);

        int j=0;

        while(j!=strlen(array)+1)

        {

            if (array[j]==52)

            {

                array[j]=50;

            }

           j++;

        }

        sscanf(array, "%lu", &y);

        a=y;

        b=x-y;

        printf("Case #%d : %lu %lu\n",i+1,a,b);

    }


}
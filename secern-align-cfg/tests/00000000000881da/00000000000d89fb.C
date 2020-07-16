#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int t,size,i,count=0;
    scanf("%d",&t);
    while(t--)
    {
        count++;
        scanf("%d",&size);
        char str[2*size-1];
        scanf("%s",str);
        printf("CASE #%d: ",count);
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]=='S')
                printf("E");
            else
                printf("S");
        }
        printf("\n");
    }
    return 0;
    }
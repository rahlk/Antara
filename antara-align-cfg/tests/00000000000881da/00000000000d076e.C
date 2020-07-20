#include <stdio.h>
int main()
{
    char inp[1000];
    char out[1000];
    int j=0;
    int length;
    int no_cases=0;
    scanf("%d",&no_cases);
    while(no_cases>j)
    {
        scanf("%d",&length);
        scanf("%s", inp);
        int i=0;
        while(length>i)
        {
            if(inp[i]=='E') out[i]='S';
            else    out[i]='E';
            i++;
        }
    printf("Case #%d: ",j);
    printf("%s\n", out);
    j++;
    }
    return 0;
}


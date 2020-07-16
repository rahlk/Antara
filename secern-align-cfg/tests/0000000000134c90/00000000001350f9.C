#include <stdio.h>
int main()
{
    int j=1;
    int length;
    int no_cases=0;
    char inp_strng[100000];
    char out_strng[100000];
    scanf("%d",&no_cases);
    while(no_cases>=j)
    {
        scanf("%d",&length);
        length=2*(length-1);
        scanf("%s", inp_strng);
        int i=0;
        while(length>i)
        {
            if(inp_strng[i]=='E') out_strng[i]='S';
            else    out_strng[i]='E';
            i++;
        }
    out_strng[i] = '\0';
    printf("Case #%d: ",j);
    printf("%s\n", out_strng);
    j++;
    }
    return 0;
}


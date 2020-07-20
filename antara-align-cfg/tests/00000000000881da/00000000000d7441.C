#include<stdio.h>
#include<string.h>
int  main()
{
    int t;
    scanf("%d",&t);
    int n[t];
    char str[t][1000];
    int i=0;
    int J=0;
    while(i<t)
    {
        scanf("%d",&n[i]);
        scanf("%s",str[i]);
        for(J=0;J<strlen(str[i]);J++)
        {
            if(str[i][J]=='E')
                str[i][J]='S';
            else
                str[i][J]='E';
        }
        i++;
    }
    i=0;
    while(i<t)
    {
        printf("Case%d: %s\n",(i+1),str[i]);
        i++;
    }
    return 0;
}
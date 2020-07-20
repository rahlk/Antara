#include<stdio.h>
#include<stdlib.h>

main()
{
    int iin,in,a,b,n,check,i,j;
    char str[10000],sp;
    scanf("%d",&in);
    for(iin=1;iin<=in;iin++)
    {
        scanf("%d%c",&n,&sp);
        gets(str);
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]=='E') str[i]='S';
            else str[i]='E';
        }
        printf("Case #%d: %s\n",iin,str);
    }
}

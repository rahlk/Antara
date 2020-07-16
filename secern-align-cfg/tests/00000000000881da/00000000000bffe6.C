# include<stdio.h>
char main()
{
    char E={"east"};
    char S={"south"};
    char i;
    char a='E',b='S',c='S',d='S',e='E',f='E',g='S',h='E';
    for(i='a';i<='h';i++)
    {
    if(i==E)
    printf("walk one unit in east");
    else if(i==S)
    printf("walking one unit in south");
    else
    printf("wrong turn");
}
}
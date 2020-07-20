#include<stdio.h>
void main()
{
    int input,val;
    scanf("%d",&input);
    for(int i=0;i<input;i++)
    {
        scanf("%d",&val);
        char ch[val];
        scanf("%d",&val);
        for(int j=0;j<val;j++)
        {
            scanf("%c",ch[j]);
            if(ch[j]=='E')
            printf("S");
            else
            printf("E");
        }
    }
}
            
        
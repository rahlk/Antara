#include<stdio.h>
void main()
{
    int input,val,av;
    scanf("%d",&input);
    for(int i=0;i<input;i++)
    {
        scanf("%d",&val);
        av=val-1;
        av=av*2;
        char ch[val];
        scanf("%s",&ch);
        for(int j=0;j<av;j++)
        {
            if(ch[j]=='E')
            printf("S");
            else
            printf("E");
        }
    }
}
            
        
#include<stdio.h>
    #include<stdlib.h>
    void main()
    {
        int input,val,av;
        char *ch;
        scanf("%d",&input);
        for(int i=0;i<input;i++)
        {
            scanf("%d",&val);
            av=val-1;
            av=av*2;
            ch=(char *)malloc(av * sizeof(char));
            for (i = 0; i < av; ++i) 
            {
                scanf("%c", &ch[i]);
            } ;
            for(int j=0;j<av;j++)
            {
                if(ch[j]=='E')
                printf("S");
                else
                printf("E");
            }
        }
    }
                
            
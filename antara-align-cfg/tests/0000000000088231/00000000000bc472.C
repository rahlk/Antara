#include <stdio.h>
#include <stdlib.h>


void main()
{
    int i,j,T,last2,last3,num ;
    char P2[100],P3[100];
    char N[100];
    
    scanf("%d",&T);
    

    for (j=0;j<T;j++)
    {
        last2=1;
        last3=1;
        for(i=0;i<100;i++)
        {
            N[i]='\0';
            P2[i]='\0';
            P3[i]='\0';
        }
        
        scanf("%s",N);
        for(i=0;i<100;i++)
        {
            if (N[i]=='4')
            {
                P2[i]='3';
                P3[i]='1';
            }
            else
            {
                P2[i]=N[i];
                P3[i]='0';
            }
        }
        num=0;
        while (N[num]!='\0')
        {
            num=num+1;
            
        }

        printf("Case #%d: ",j+1);
        for (i=0;i<num;i++)
        {   
            if (P2!='\0')
            {
                if (P2[i]!='0')
                {
                    last2=0;
                }
                if (last2==0)
                {
                    printf("%c",P2[i]);
                }
            }
        }
        printf(" ");

        for (i=0;i<num;i++)
        {
            if (P3!='\0')
            {
                if (P3[i]!='0')
                {
                    last3=0;
                }
                if (last3==0)
                {
                    printf("%c",P3[i]);
                }
            }
        }
        printf("\n");
        
        
    }
}
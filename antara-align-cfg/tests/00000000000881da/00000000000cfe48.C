#include<string.h>
#include<stdio.h>
void main()
{
    char P[2000],my[2000];
    int T,i,N,j,len,rl,rm,cm,cl;
    rl=rm=cl=cm=0;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        fflush(stdin);
        gets(P);
        len=strlen(P);
        if(len!=(2*N-2))
        {
            continue;
        }
        if(P[0]=='S')
        {
            rl++;
            cm++;
            my[0]='E';
        }
        else
        {
            rm++;
            cl++;
            my[0]='S';
        }
        for(j=1;P[j]!='\0';j++)
        {
/*            if((rm==rl)&&(cl==cm))
            {
                if(P[j]=='S')
                {
                    my[j]='E';
                    cm++;
                }
                else
                {
                    my[j]='S';
                    rm++;
                }
            }
            my[j]='E';
            cm++;*/
            if(P[j]=='S')
            {
                my[j]='E';
                //rl++;
            }
            else if(P[j]=='E')
            {
                my[j]='S';
                //cl++;
            }
            else
            {
                my[0]='\0';
                break;
            }
        }
        my[j]='\0';
        printf("Case #%d: %s\n",i+1,my);
    }
    exit(0);
}

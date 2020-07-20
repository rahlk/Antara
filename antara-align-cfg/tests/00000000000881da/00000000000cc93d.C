
# include <stdio.h>
# include <stdlib.h>

int main()
{
    int i,j,N,T,dir,check,pointer,x,y;
    scanf("%d",&T);

    char P[50000];

    for (j=0;j<T;j++)
    {
        check=0;
        pointer=1;
        x=0;
        y=0;
        scanf("%d",&N);
        scanf("%s",P);
        dir=(2*N-2);
        printf("Case #%d: ",j+1);
        if (P[dir-1]=='E') 
        {
            if (P[0]=='S')
            {
                for (i=0;i<N-1;i++)
                {
                    printf("E");
                }
                for (i=0;i<N-1;i++)
                {
                    printf("S");
                }
            }
            else
            {
                while(check==0)
                {   
                    if (P[pointer]=='S')
                    {
                        x++;
                        if (P[pointer-1]=='S')
                        {
                            check=1;
                        }
                        else
                        {
                            pointer++ ;
                        }
                    }
                }
                for(i=0;i<(x-1);i++)
                {
                    printf("S");
                }
                for(i=0;i<(N-1);i++)
                {
                    printf("E");
                }
                for(i=0;i<(N-x);i++)
                {
                    printf("S");
                }
                
            }
        }
        else 
        {
            if (P[0]=='E')
            {
                for (i=0;i<N-1;i++)
                {
                    printf("S");
                }
                for (i=0;i<N-1;i++)
                {
                    printf("E");
                }
            }
            else
            {
                while(check==0)
                {   
                    if (P[pointer]=='E')
                    {
                        y++;
                        if (P[pointer-1]=='E')
                        {
                            check=1;
                        }
                        else
                        {
                            pointer++ ;
                        }
                    }
                }
                for(i=0;i<(y-1);i++)
                {
                    printf("E");
                }
                for(i=0;i<(N-1);i++)
                {
                    printf("S");
                }
                for(i=0;i<(N-y);i++)
                {
                    printf("E");
                }
                
            }
        }   
        
        printf("\n");
        
    }
    return 0;
}
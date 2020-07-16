#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    long double **c;
    long double n,p[25];
    int t,l,j,i;
    
    scanf("%d",&t);
    
    c=(long double **)calloc(t,sizeof(long double *));
    
    for(i=0;i<t;i++)
    {
        fflush(stdin);
        scanf("%Lf",&n);
        scanf("%d",&l);
        
        c[i]=(long double *)calloc(l+3,sizeof(long double));
        
        for(j=0;j<l;j++)
          scanf("%Lf",&c[i][j+2]);
          
        c[i][0]=l;
        c[i][1]=n;
        
    }
    
    for(i=0;i<t;j++)
    {
        n=0;
        for(j=2;n<25;j++)
        {
            for(l=0;l<c[i][0];l++)
            {
                if(fmood(c[i][l+2],(long double)j)==0)
                {
                    p[(int)n]=(long double)j;
                    n++;
                    break;
                }
            }
        }
        
        printf("Case #1: ");
        
        for(j=0;j<c[i][0];j++)
        {
            for(n=0;n<25;n++)
            {
                if(fmod(p[(int)n],c[i][j+2])==0)
                {
                    if(j!=c[i][0]-1)
                    {
                        if(fmod(p[(int)n],c[i][j+3])==0)
                          continue;
                          
                        else
                          printf("%c",(65+(int)n));
                        
                    }
                    
                    else
                    {
                       if(fmod(p[(int)n],c[i][j+1])==0)
                       {
                          printf("%c",(65+(int)n));
                          
                          c[i][j+2]=c[i][j+2]/p[(int)n];
                          
                          for(l=0;l<25;l++)
                          {
                              if(fmod(p[(int)l],c[i][j+2])==0)
                                 printf("%c",(65+(int)l));
                                 
                              else
                                continue;
                          }
                       }
                       
                       else
                         continue;
                    }
                }
            }
        }
    }
    
    return 0;
    
}
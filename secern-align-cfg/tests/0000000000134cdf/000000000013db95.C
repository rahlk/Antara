#include<stdio.h>
int main()
{
    int i,j,k,T,R[20],C[20],posx[100][20],posy[100][20],count[100],countb[100];
    char s[20][20];
    
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d%d",&R[i],&C[i]);
        
    }
    for(i=0;i<R[i];i++)
    {
        for(j=0;j<C[i];j++)
        {
            scanf("%c",s[i][j]);
            
        }
    }
    for(i=0;i<R[i];i++)
    {count[i]=0;
        for(j=0;j<C[i];j++)
        {
            if(s[i][j]=='.' && i>0 && j>0 && i<R[i]-1 && j<C[i]-1)
            {
                
                
                if(s[i+1][j]!='#')
                {count[i]++;
                posx[i][j]=i+1;
                posy[i][j]=j;
                }
                else
                if(s[i-1][j]!='#')
                { count[i]++;
                posx[i][j]=i-1;
                posy[i][j]=j;
                    
                }
                else
                if(s[i][j-1]!='#')
                { count[i]++;
                posx[i][j]=i;
                posy[i][j]=j-1;
                    
                }
                else
                if(s[i][j+1]!='#')
                { count[i]++;
                posx[i][j]=i;
                posy[i][j]=j+1;
                    
                }
                
            }
            else
            if(s[i][j]='.' )
            {
                if(i==0 || j==0 || i==R[i]-1 || j==C[i]-1)
            {
                if(s[i][j]!='#')
                {
                    count[i]++;
                    posx[i][j]=i;
                    posy[i][j]=j;
                }
            }
        }}}
        //Becca
        for(i=0;i<R[i];i++)
    {countb[i]=0;
        for(j=0;j<C[i];j++)
        {
            if(s[i][j]=='.' && i>0 && j>0 && i<R[i]-1 && j<C[i]-1)
            {
                
                
                if(s[i+1][j]!='#')
                {countb[i]++;
                posx[i][j]=i+1;
                posy[i][j]=j;
                }
                else
                if(s[i-1][j]!='#')
                { countb[i]++;
                posx[i][j]=i-1;
                posy[i][j]=j;
                    
                }
                else
                if(s[i][j-1]!='#')
                { countb[i]++;
                posx[i][j]=i;
                posy[i][j]=j-1;
                    
                }
                else
                if(s[i][j+1]!='#')
                { countb[i]++;
                posx[i][j]=i;
                posy[i][j]=j+1;
                    
                }
                
            }
            else
            if(s[i][j]='.' )
            {
                if(i==0 || j==0 || i==R[i]-1 || j==C[i]-1)
            {
                if(s[i][j]!='#')
                {
                    countb[i]++;
                    posx[i][j]=i;
                    posy[i][j]=j;
                }
            }
        }
        }
    }
        
        for(i=0;i<T;i++)
        {
        if(count[i]%2==1)
        {
           printf("Case #%d: %d",i+1,countb[i]);
        }

    
    
}
    
}
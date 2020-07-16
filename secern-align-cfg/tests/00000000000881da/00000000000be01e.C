#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch[100][2000];
    
    int i,j,n,t;
    
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
    {
        fflush(stdin);
        scanf("%d",&n);
        
       scanf("%s",&ch[i]);
        
        for(j=0;j<2*n-2;j++)
        {
            if(ch[i][j]=='E')
              ch[i][j]='S';
              
            else
              ch[i][j]='E';
        }
    }
    
    for(i=0;i<t;i++)
    {
        printf("Case #%d: ",(i+1));
        puts(ch[i]);
        
        if(i<(t-1))
          printf("\n");
    }
    
}
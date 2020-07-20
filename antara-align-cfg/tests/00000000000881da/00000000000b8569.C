#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{   int n,m,i,j;
    char *path,path1;
    
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&m);
        path=(char)malloc(sizeof(int)*2m-2);
        path1=(char)malloc(sizeof(int)*2m-2);
        for(i=0;i<2m-2;++i)
        {   
            scanf("%c",&path[i]);
            if(path[i]=='E')
            {
                path[i]='S';
            }
            if(path[i]=='S')
            {
                path[i]='E';
            }
        }
        
        
    }
    
    }
    
}
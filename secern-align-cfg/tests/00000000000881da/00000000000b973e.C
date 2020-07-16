#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{   int n,m,i,j,c;
    char *path,path1;
    
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&m);
        c=2*m-2;
        path=(char)malloc(sizeof(int)*c);
        path1=(char)malloc(sizeof(int)*c);
        for(i=0;i<c;++i)
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
        for(j=0;j<c;++j)
        {
            t=j;
            if(t==c)t=0;
            path1[j+1]=path[j];
            
        }
        for(i=0;i<c;i++)printf("%c",&path1[i]);
    }
    n--;
    }
    return 0;

}
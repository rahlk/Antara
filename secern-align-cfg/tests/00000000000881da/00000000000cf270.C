#include<stdio.h>
#include<malloc.h>
int main()
{
    int n,*test,i,j,length,e,s;
    char **path,**path2;
    scanf("%d",&n);
    test=(int *)malloc(sizeof(int)*n);
    path=(char **)malloc(sizeof(char*)*n);
    path2=(char **)malloc(sizeof(char*)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&test[i]);
        path[i]=(char*)malloc(sizeof(char)*test[i]*2-1);
        scanf("%s",path[i]);
        path2[i]=(char*)malloc(sizeof(char)*test[i]*2-1);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*test[i]-2;j++)
        {
            if(path[i][j]=='E') path2[i][j]='S';
            if(path[i][j]=='S') path2[i][j]='E';
        }
        path2[i][j]='\0';
        printf("Case #%d: %s \n",i+1,path2[i]);
    }
    return 0;
}
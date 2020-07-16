#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char **c,*temp;
    long int n,i;
    int t,j;
    
    scanf("%d",&t);
    
    c=(char **)calloc(t,sizeof(char *));
    
    for(j=0;j<t;j++)
    {
        fflush(stdin);
        scanf("%ld",&n);
        c[j]=(char *)calloc(2*(n-1)+1,sizeof(char));
        
          scanf("%s",c[j]);
    }
    
    for(j=0;j<t;j++)
    {
        for(i=0;c[j][i]!='\0';i++)
        {
            if(c[j][i]=='S')
              c[j][i]='E';
              
            else
              c[j][i]='S';
        }
        
        printf("Case #%d: ",(j+1));
        puts(c[j]);
        
        if(j<(t-1))
          printf("\n");
    }
    
    return 0;
}
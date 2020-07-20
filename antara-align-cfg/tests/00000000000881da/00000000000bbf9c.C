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
        scanf("%ld",&n);
        c[j]=(char *)calloc(2*(n-1)+1,sizeof(char));
        
        for(i=0;i<2*(n-1);i++)
        {
         
          scanf("%1c",&c[j][i]);
        
          if(c[j][i]=='S')
              c[j][i]='S';
              
            else
              c[j][i]='E';
        }  
        c[j][i]='\0';
    }
    
    for(j=0;j<t;j++)
    {
        
        printf("Case #%d: ",(j+1));
        puts(c[j]);
        
        if(j<(t-1))
          printf("\n");
    }
    
    return 0;
}
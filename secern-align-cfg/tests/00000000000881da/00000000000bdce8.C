#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ch(char **a, int p)
{
    long int n,i; 
    char *t,pos;
    
    fflush("stdin");
    scanf("%ld",&n);
    t=(char *)calloc(2*n-1,sizeof(char));
    
    for(i=0;i<2*n-2;i++)
    {
        scanf("%c",&pos);
        
        if(pos=='S')
          t[i]='S';
          
        else
          t[i]='E';
    }
    t[i]='\0';
    a[p]=t;
    return p;
    

}


int main()
{
    char **c;
    int t,j;
    
    scanf("%d",&t);
    
    c=(char **)calloc(t,sizeof(char *));
    
    for(j=0;j<t;j++)
    {
        ch(c,j);
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


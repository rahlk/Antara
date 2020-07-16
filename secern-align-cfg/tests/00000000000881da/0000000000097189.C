#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int T;
    long int N;
    scanf("%d",&T);
    char **result=(char**)malloc(sizeof(char*)*T);
    for(int i=0;i<T;i++)
    {
        scanf("%ld",&N);
        long int size= 2*N-2;
        char *st=(char*)malloc(sizeof(char)*(size+1));
        char *res=(char*)malloc(sizeof(char)*(size+1));
        scanf("%s",st);
        long int j=0;
        for(j=0;j<size;j++)
        {
            if(st[j]=='E')
            {
                res[j]='S';
            }
            else if(st[j]=='S')
            {
                res[j]='E';
            }
            
        }
        
        result[i]=res;
       
    }
    for(int i=0;i<T;i++)
    {
        printf("Case #%ld: %s\n",i+1,result[i]);
    }
}
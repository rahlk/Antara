#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void makezero(int* p,int*r,int*s)
{
    for(int i=0;i<500;i++)
    {
        p[i]=0;
        r[i]=0;
        s[i]=0;
    }
}
int main()
{
    int t,a,len,maxlen;
    int* p=(int*)malloc(sizeof(int)*500);
    int* r=(int*)malloc(sizeof(int)*500);
    int* s=(int*)malloc(sizeof(int)*500);
    char* result=(char*)malloc(sizeof(char)*500);
    makezero(p,r,s);
    char* str=(char*)malloc(sizeof(char)*500);
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    
        makezero(p,r,s);
        scanf("%d",&a);
        for(int m=0;m<a;m++)
        {

            scanf("%s",str);
            len=strlen(str);
            if(len>maxlen)
            {
                maxlen=len;
            }
            for(int j=0;j<len;j++)
            {
                if(str[j]=='S')
                {
                    s[j]=1;
                }
                else if(str[j]=='R')
                {
                    r[j]=1;
                }
                else
                {
                    p[j]=1;
                }
                
            }
            
        }
        
        for(int k=0;k<maxlen;k++)
        {
            if(s[k]&&p[k]&&r[k])
            {
            	result[0]='\0';
                printf("Case #%d: IMPOSSIBLE\n",i+1);
                break;
            }
            else if(s[k]&&p[k])//scissors and paper
            {
                result[k]='S';
            }
            else if(s[k]&&r[k])//scissors and rock
            {
                result[k]='R';
            }
            else if(r[k]&&p[k])
            {
                result[k]='P';
            }
            else if(r[k]==1)
            {
                result[k]='P';
            }
            else if(p[k]==1)
            {
                result[k]='S';
            }
            else
            {
                result[k]='R';
            }
            
        }
        if(strlen(result)!=0)
        {
        	result[maxlen]='\0';
        	printf("Case #%d: %s\n",i+1,result);

		}
        
        
    }
}
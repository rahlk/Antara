#include <stdio.h>
#include <string.h>

#define N 10

char a[101][N+1];
char r[101][N+1];
int t;
int tt=0;

void setting(void)
{
    int i;
    
    for(i=1;i<=10;i++)
    {
        a[i]=1;
        r[i]=1;
	}
}

void process(void)
{
    int i;
    int k=0;
    int slen=strlen(&a[tt][1]);
    
    for(i=1;i<=slen;i++)
    {
        if(a[tt][i]=='4')
        {
            a[tt][i]='3';
            k++;
            r[tt][k]='1';
        }
        else if(k)
        {
            k++;
            r[tt][k]='0';
        }
	}
    
}
void input(void)
{
    int i;
    
    scanf("%d ",&t);
    for(i=1; i<=t;i++)
    {
        tt=i;
        setting();
        scanf("%s",&a[tt][1]);
        process();
       // printf("Case #%d: %s %s/n",i,&a[1],&r[1]);
    }
    for(i=1;i<=t;i++)
    {
        printf("Case #%d: %s %s₩n",i,&a[i][1],&r[i][1]);
    }
}

int main(void)
{
    input();
    return 0;
}
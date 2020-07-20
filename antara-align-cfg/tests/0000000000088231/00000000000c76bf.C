#include <stdio.h>
#include <string.h>

#define N 10

char a[N+1];
int r[N+1];
int t;

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
    int slen=strlen(&a[1]);
    
    for(i=1;i<=slen;i++)
    {
        if(a[i]=='4')
        {
            a[i]='3';
            k++;
            r[k]='1';
        }
        else if(k)
        {
            k++;
            r[k]='0';
        }
	}
    
}
void input(void)
{
    int i;
    
    scanf("%d",&t);
    scanf("%c",&i);
    for(i=1; i<=t;i++)
    {
        setting();
        scanf("%s",&a[1]);
        process();
        printf("Case #%d: %s %s/n",i,&a[1],&r[1]);
    }
}

int main(void)
{
    input();
    return 0;
}
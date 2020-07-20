#include<stdio.h>
int main()
{
    int n,m,c;
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    {
    scanf("%d",&m);
    comp(m,c);
    }
}
void comp(int m,int c)
{
    int i,x,j,y;
    for(i=1;i<=m/2;i++)
    {
        x=checkf(i);
        if(x==0)
        {
            j=m-i;
            y=checkf(j);
            if(y==0)
            {
            printf("Case #%d: %d %d",c,i,j);
            return;
            }
            
        }
        
    }
    
}
int checkf(int a)
{
    int f=1,r;
    while(a>0)
    {
        r=a%10;
        if(r==4)
        return f;
        a=a/10;
        
    }
    return 0;
}
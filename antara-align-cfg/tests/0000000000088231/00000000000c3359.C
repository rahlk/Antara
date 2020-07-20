#include<stdio.h>
int main()
{
    int n,m,c,x[100000],y[100000];
    scanf("%d",&n);
    for(c=0;c<n;c++)
    {
    scanf("%d",&m);
    x[c]=comp(m);
    y[c]=m-x[c];
    }
    for(c=0;c<n;c++)
    printf("Case #%d: %d %d\n",c+1,x[c],y[c]);
    
}
int comp(int m)
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
            //printf("Case #%d: %d %d",c,i,j);
            return i;
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
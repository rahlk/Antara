#include<stdio.h>
int i=0,j;
void eliminate(int n)
{
    bool check;
    j=0;
    while(true)
    {
        check=has4(n-j,j)
    if(check){
    break;
    }
    j++;    
    }
    printf("Case #%d:%d  %d\n",i,(n-j),(j));
    
}

bool has4(int a,int b)
{
    while(a>0 || b>0)
    {
        if(a%10!=4 && b%10!=4)
        {
            a=a/10;
            b=b/10;
        }
        else
        {
            return false;
        }
    }
    return true;
}

void main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        eliminate(num[i]);
    }
}

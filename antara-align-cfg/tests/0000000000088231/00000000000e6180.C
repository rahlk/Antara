#include <stdio.h>
#include <stdbool.h>

bool ishave(int n)
{
    
    while (n != 0)
    {
        if ((n % 10) == 4) 
        {
            return true;
        }
        n = (n - (n%10))/10;   
    }
    return false;
}


int count(int n)
{
    int i;
    while (n != 0)
    {
        n = n/10;
        i++;
    }
    return n;
}


int find(int x,int y) 
{
    if(ishave(x) == true)
    {
        find((x-1),(y+1));
    }

    else if(ishave(y) == true)
    {
        find((x-1),(y+1));
    }

    else  
    {
        return x;
    }
}


int main(void)
{
    int t,n,i;
    int num;
    int num2;
    i=1;
    scanf("%d",&t);
    for(i;i<=t;i++)
    {
    scanf("%d",&n);	 
    num = find((n-1),1);
    num2 = n - num;
    
    printf("Case #%d: %d %d\n",i ,num ,num2);
    }
}










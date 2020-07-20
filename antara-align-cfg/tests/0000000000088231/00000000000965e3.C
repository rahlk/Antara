#include<stdio.h>

int pass(int num)
{
    while(num>0)
    {
        if (num%10 == 4)
            return 0;
        else 
            num /= 10;
    }
    return 1;
}


int main()
{
    int test;
    scanf("%d",&test);
    
    for(int i=0;i<test;i++)
    {
        int num;
        scanf("%d",&num);
        
        int oth = 1;
        num--;
        
        while(pass(num) != 1 || pass(oth) != 1)
        {
            num--;
            oth++;
        }
        
        printf("Case #%d: %d %d\n",i+1,num,oth);
    }
}
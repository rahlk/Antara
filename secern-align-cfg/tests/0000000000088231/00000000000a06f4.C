#include<stdio.h>
int check(int num)
{
    int num2=num;
    while(num2>0)
        {
            if(num2 % 10==4)
            return 1;
            num2=num2/10;
        
        }
        return 0;
}

    
int main()
{
    int i,j,sum,num1,num2;
    scanf("%d",&i);
    for(j=0;j<i;++j)
        {  
            scanf("%d",&sum);
            for(num1=1,num2=sum-1;num1!=num2;num1++,num2--)
            {
                if(check(num1)==0 && check(num2)==0)
                printf("case #%d: %d %d\n",j+1,num1,num2);
                break;
            }
        }
}
#include<stdio.h>
long check(long num)
{
    long num2=num;
    while(num2>0)
        {
            if(num2 % 10==4)
            return 1;
            num2=num2/10;
        
        }
        return 0;
}

    
void main()
{
    long i,j,sum,num1,num2;
    scanf("%d",&i);
    int cases[i];
    for(j=0;j<i;++j)
        {  
            scanf("%d",&cases[j]);
        }
        for(j=0;j<i;++j)
        {    for(num1=1,num2=cases[j]-1;num1!=num2;num1++,num2--)
            {
                if(check(num1)==0 && check(num2)==0)
                printf("case #%d: %d %d\n",j+1,num1,num2);
                break;
            }
        }
}
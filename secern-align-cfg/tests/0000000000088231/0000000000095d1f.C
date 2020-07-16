#include<stdio.h>

int main(void)
{
    unsigned char N;
    int a,b=0,f=1,temp;
    scanf("%d",&N);
    for(unsigned char t=0;t<N;t++)
    {
        printf("\nCase #%d: ",t);
        scanf("%d",&a);
        temp = a/2;
        
        while(a>=b)
        {
            a--;
            b++;
            
            temp=a;
            while(temp>0)
            {
                if(temp%10 == 4)
                {
                    f=0;
                    break;
                }
                temp/=10;
            }
            
            if(f!=0)
            {
                temp=b;
                while(temp>0)
                {
                    if(temp%10 == 4)
                    {
                        f=0;
                        break;
                    }
                    temp/=10;
                } 
            }
            
            if(f==1)
                break;
        }
        printf("%d %d",a,b);
    }
    
}
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int check_digit(int x, int d)
{

    while (x > 0)
    {
        if (x % 10 == d)
            break;

        x = x / 10;
    }

     if(x > 0)
        return 0;
        else
            return 1;

}
int main()
{
    int i=0,j=0,count=0,digit=0,n=0,t=0,check=0,n1=0,flag=0;
    int arr[10];
    for(i=0;i<10;i++)
        arr[i]=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        count=n;
        while(count>0)
        {
            count=count/10;
            digit=count%10;
            arr[digit]=1;
        }
        for(i=n-1;i>=1;i--)
        {
            for(j=0;j<10;j++)
            {
                if(arr[j]==1)
                {
                    check=check_digit(i,j);
                    if(check==0)
                    break;
                }
            }
            if(check==1)
            {
                n1=n-i;
                 for(j=0;j<10;j++)
                {
                if(arr[j]==1)
                {
                    flag=check_digit(n1,j);
                    if(flag==0)
                    break;
                }
                }
            }
            if(flag && check)
                printf("%d %d\n",n1,i);
        }


    }
    return 0;
}

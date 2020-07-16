#include<stdio.h>
#include<math.h>

int fun(int n)
{
   int four=0;
   while(n!=0)
    {
        four=n%10;
        if(four==4)
        {

            return 1;
        }
        n=n/10;
    }
    return 0;
}

void main()
{
    int N;
    scanf("%d",&N);
    //printf("\n");
    int j;
    for(j=1;j<=N;j++){
    int flag=0;
    int num=940;
    int num1=0,num2=0;
    scanf("%d",&num);
    int temp=num,four=0;

    while(temp!=0)
    {
        four=temp%10;
        if(four==4)
        {
            flag=1;
            break;
        }
        temp=temp/10;
    }
    int i;
    if(flag){
    for(i=2;i<=sqrt(num);++i)
    {
        temp=num;
        if(temp%i==0)
        {
        temp=num/i;
        }
        else{
            continue;
        }

        int s1=fun(temp);
        int s2=fun(num-temp);
        if(s1!=1 && s2!=1)
        {
            num1=temp;
            num2=num-temp;
            printf("\tCase #%d:%d %d\n",j,num1,num2);
            break;
        }
    }
    }
    else
        printf("Case #%d:%d %d\n",j,0,num);
    }

}

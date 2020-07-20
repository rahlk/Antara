#include<stdio.h>
#include<math.h>
int count(int n)
{
    int totalDigits=0,no=0;
    no=n;
    while(no!=0)
    {
    no = no/10;
    totalDigits ++;
    }
    return totalDigits;
}
int check(int n)
{
    int no1=0,temp=0,cnt=0,i=0;
    no1=n;
    temp=no1;
    for(i=0;i<=count(no1);i++)
    {
        temp=no1%10;
        if(temp==4)
        {
            cnt++;
        }
        no1=no1/10;
    }
    return cnt;
}
int main()
{
    int n,n1,n2,n3,i=1,A,B;
    scanf("%d",&n);
    scanf("%d",&n1);
    scanf("%d",&n2);
    while(i<n)
    {
        if(i==1)
        {
            if(1<=count(n1)<=100000&&check(n1)>0)
            {
                scanf("%d%d",&A,&B);
                if(check(A)==0&&check(B)==0&&n1==A+B)
                {
                    printf("case #1: %d %d",A,B);
                }
            }
        }
        if(i==2)
        {
            if(count(n2)<=pow(10,9)&&check(n2)>0&&n2==A+B)
            {
                scanf("%d%d",&A,&B);
                if(check(A)==0&&check(B)==0)
                {
                    printf("case #2: %d %d",A,B);
                }
            }
        }
        i++;
    }
};
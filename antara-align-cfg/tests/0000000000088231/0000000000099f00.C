# include<stdio.h>
main()
{
    int A,B,N,cnt;
    int digit,rem,tnum;
    int num;
    printf("enter value of A,B");
    scanf("%d%d",&A,&B);
    N=A+B;
    printf("sum of A and B=%d",N);
    printf("enter digit to search");
    scanf("%d",&digit);
    cnt=0;
    tnum=N;
    while(tnum>0);
    {
        rem=tnum%10;
        if(rem==digit)
        cnt++;
        tnum/=10;
    }
    printf("total occurrence of digit is= %d in number=%d",cnt,num);
    if(cnt!=0)
    {
        printf("keyboard of our oversized check printer is broken");
    }
    else
    {
        printf("continue to send check");
    }
    return 0;
}
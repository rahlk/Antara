#include<stdio.h>
main()
{
    int t,j;
    unsigned long  number,f_num,sec_num,digit,i,num;
    scanf("%d",&t);
    for(j=1;j<=t;++j)
    {
        f_num = sec_num = digit = num =0;
        i=1;
    scanf("%lu",&number);
    num = number;
    while(num>0)
    {
        digit = num %10;
        if(digit == 4)
            f_num = 3*i + f_num;
        else
            f_num = digit*i + f_num;
        i*=10;
        num/=10;
    }
    sec_num = number - f_num;
    printf("Case #%d: %lu %lu\n",j,f_num,sec_num);
    }

}

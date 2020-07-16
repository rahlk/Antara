#include<stdio.h>
#include<math.h>
long long int check (int long long num;, int pos)
{
    long long int temp=1,num1=num,num2=0,numc=num;
    int p=0;
    while(numc>0)
    { ++p;
        if(numc%10==4)
        {
            for(int j=0;j<p;++j)
               temp*=10;
                num1-=temp;
                num2+=temp;
        }
    numc/=10;
    }
}
    
return main()
{
    int i;
    scanf("%d",&i);
    long long int cases[100];
    for(j=0;j<i;++j)
        {  
            scanf("%lld",&cases[j]);
        }
        for(j=0;j<i;++j)
        {
            check(cases[j],j+1);
        }
return 0;
}

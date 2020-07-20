#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int z=1;z<=n;z++)
    {
        long money;
        
        scanf("%ld", &money);
        int moneyarr[100]={0};
        int a[100]={0};
        int size;
        for(size=0;money!=0;size++)
        {
            moneyarr[size]= money%10;
            money/=10;
        }
        size-=1;
        /*for(int j=i;j>=0;j--)
        {
            printf("%d",moneyarr[j]);
        }*/
        for(int i=0;i<=size;i++)
        {
            if(moneyarr[i]==4)
            {
                moneyarr[i]=3;
                a[i]=1;
            }
        }
        long moneys=0, second=0;
        /*for(int j=size;j>=0;j--)
        {
            printf("%d",moneyarr[j]);
        }
        printf(" ");
        int flag=1;
        for(int j=size;j>=0;j--)
        {
            if(flag ==1)
            {
                if(a[j]!=0)
                {
                    printf("%d",a[j]);
                    flag=0;
                }
            }
           else{printf("%d",a[j]);}
        }*/
        for(int j=size;j>=0;j--)
        {
            moneys=moneys*10 + moneyarr[j];
            second = second*10+a[j];
        }

        printf("Case #%d: %ld %ld\n",z, moneys,second);
       
    }    
return 0;
}
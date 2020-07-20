#include<stdio.h>

int main()
    {
        int t;
        scanf("%d",&t);
            for(int k=0;k<t;k++)
                {
                    int n;
                    scanf("%d",&n);
                    int temp=n,a=0,b=0,i,m=1;
                        while(temp>0)
                            {
                                i=temp%10;
                                temp=temp/10;
                                    if(i == 4)
                                        {
                                            a=a+m;
                                            b=b+m*(i-1);
                                        }
                                    else
                                        {
                                            b=b+m*i;
                                        }
                                m=10*m;
                            }
                        printf("Case #%d: %d %d\n",k+1,a,b);
                }
        return 0;
    }
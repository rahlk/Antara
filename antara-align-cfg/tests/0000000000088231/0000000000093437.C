#include<stdio.h>

int main()
    {
        int t,n;
        scanf("%d",&t);
            for(int k=0;k<t;k++)
                {
                    scanf("%d",&n);
                    int temp=n,i,a=0,b=0,m=1;
                    while(temp>0)
                        {
                            i=temp%10;
                            
                            temp=temp/10;
                                if(i == 4)
                                    {
                                        a=a+m;
                                        b=b+(i*m-m);
                                    }
                                else
                                    {
                                        b=b+i*m;
                                        
                                    }
                                m=m*10;
                        }
                        printf("%d %d\n",a,b);
                }
            return 0;
    }
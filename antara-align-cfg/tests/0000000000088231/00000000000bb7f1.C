#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T,N;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%d",&N);
        if((N>1)&&(N<100000))
        {
            int fl=0,A,B;
            for(int j=0;j<N;j++)
            {
                for(int k=0;k<N;k++)
                {
                    A=j;
                    B=k;
                    if((j+k)==N)
                    {
                        if((j==k)&&(j!=4)&&(k!=4)&&(j<10)&&(k<10))
                        {
                        fl=1;
                        break;
                        }
                        if((j<10)&&(k<10)&&(j!=4)&&(k!=4))
                        {
                        fl=1;
                        break;
                        }
                        if((j>10)&&(k>10))
                        {
                            int p=j,q=k,num,flag=0,flag1=0;
                            while(p>0)
                            {
                               num=p%10;
                               if(num==4)
                               flag=1;
                               p=p/10;
                            }
                            while(q>0)
                            {
                                num=q%10;
                                if(num==4)
                                flag=1;
                                q=q/10;
                            }
                            if((flag==0)&&(flag1==0))
                            {
                            fl=1;
                            }
                            break;
                        }
                    }
                }
                if(fl==1)
                {
                printf("Case #i: %d %d\n",A,B);
                break;
                }
            }
        }
    }
}
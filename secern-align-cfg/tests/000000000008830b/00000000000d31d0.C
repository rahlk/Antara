#include<stdio.h>
int main()
{
    long long int t,n,i,j,z=1,x,k,flag,l,temp[110],a[26],ac=0,ip;char y='A';
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {   ac=0;
        z=1;
        scanf("%lld%lld",&n,&l);
        scanf("%lld",&ip);
        //searching for prime1
        for(j=3;j<n;j++)
        {
            //checking prime number
            flag=1;
            for(k=2;k<j;k++)
            {
                if(j%k==0)
                    flag=0;
            }
            //if prime
            if(flag==1)
            {
                if(ip%j==0)
                {
                    temp[0]=j;
                    a[0]=j;
                    temp[1]=ip/j;
                    if(a[0]!=ip/j)
                    {    
                        a[1]=ip/j;
                        ac++;
                    }    
                    break;
                }
            }
        }   
        for(k=1;k<l+1;k++)
        {
            scanf("%d",&ip);
            temp[k+1]=ip/temp[k];
            flag=1;
            for(j=0;j<ac+1;j++)
            {
                if(a[j]==ip/temp[k])
                {
                    flag=0;
                }
            }
            if(flag)
            {
                ac++;
                a[ac]=ip/temp[k];
            }
        }
        while(z)
        {   z=0;
            for(j=0;j<ac;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        x=a[j+1];
                        a[j+1]=a[j];
                        a[j]=x;
                        z=1;
                    }
                }
        }    
        printf("Case #%lld: ",i+1);
        for(j=0;j<l+1;j++)
        {
            for(k=0;k<ac;k++)
            {
                if(temp[j]==a[k])
                {
                    printf("%c",y+k);
                }
                
            }    
        }
        printf("\n");
    }

return 0;
}
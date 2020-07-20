#include<stdio.h>
void main()
{
    int t,i,a=0,b=0,k,r,tmp=0,j,l,z,y;
    scanf("%d",&t);    
    if(1<=t<=100)
    {
        int arr[t];
        int f[t][2];
        int s[100];
        int f2[100];
        for(i=0;i<t;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<t;i++)
        {
            k=arr[i];
            tmp=0;
            a=0;
            while(k>0)
            {
                r=k%10;
                s[tmp]=r;
                k=k/10;
                tmp++;
            }         
            for(z=0;z<tmp;z++)
            {
                if(s[z]==4)
                    s[z]=3;
            }            
            
            for(l=z-1;l>=0;l--)
            {
                a=a*10+s[l];
            }           
            b=arr[i]-a;
            f[i][0]=a;
            f[i][1]=b;
        }
        for(i=0;i<t;i++)
        {
            printf("Case #%d: %d %d\n",i+1,f[i][0],f[i][1]);
        }        
    }    
}
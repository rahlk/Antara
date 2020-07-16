#include<math.h>
#include<stdio.h>
void main()
{int n,t[100],s[100],i,num,j,k,a,digit,ans;
    scanf(" %d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
        a=n;
        k=0;
        while(a>0)
        {digit=0;
        num=a%10;
        if(num==4)
        digit=digit+1*pow(10,k);
        k++;
        a=a/10;
        }
        s[i]=digit;
    }
    for(i=0;i<n;i++)
    printf("Case #%d: %d %d",i+1,s[i],t[i]-s[i]);
    }
    

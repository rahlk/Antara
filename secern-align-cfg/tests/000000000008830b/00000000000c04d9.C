#include<stdio.h>
char Decrypt(int N, int L,char arr[L]);
int main()
{
    int T,L,arr[100],i,j,N,j1;
    scanf("%d",&T);
    char m[T];
    for(j=0;j<=T-1;j++)
    {
    scanf("%d %d",&N,&L);
    for(i=0;i<=L-1;i++)
    {
    scanf("%d",&arr[i]);
    }
    m[j]=Decrypt(N,L,arr[L]);
    }
    for(j1=0;j1<=T-1;j1++)
    {
        printf("case #%d:%s",j1+1,m[j1]);
    }
}    
   char Decrypt(int N, int L,char arr[L])
  {
      int i,j,j1,i2,j2,i3,j3=0,prime[L+1],primetext[L+1],k=0,k1=0,result[L+1];
       for(i=2;i<=N;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
         
       if(c==2)
        {
            i=prime[k];
            k++;
        }
    }
        for(j1=0;j1<=k;j1++)
        {
            if(arr[0]%prime[j1]==0)
            {
                prime[j1]=primetext[k1];
                k1++;
            }
        }
        for(i2=1;i2<=k;i2++)
        {
            primetext[i2+1]=arr[i2]/primetext[i2];
        }
        for(j2=0;j2<=L;j2++)
        {
            for(i3=0;i3<=k;i3++)
            {
                if(primetext[j2]==prime[i3])
                {
                 result[j3]=65+i3;
                 j3++;
                }
            }
        }
        
    return result;
  }

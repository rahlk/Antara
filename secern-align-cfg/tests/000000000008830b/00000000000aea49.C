#include<stdio.h>
void main()
{
    int k,n,l,i,j,temp,count=0;
    int input[100];
    scanf("%d",&k);
    scanf("\n%d %d",&n,&l)
    for(i=0;i<l;i++)
      scanf("%d",&input[i]);
    int prime[26];
    for(i=2;i<=n;i++) 
      for(j=2;j<=n/2;j++)
       {
        if(i%j==0)
          break;
        prime[count++]==j;
       }
     
          for(j=0;j<26;j++)
          {  temp=input[0]%prime[j];
             if(temp!=0)
               print("%c",j+65);
          }
          for(i=1;i<l+1;i++)
            {
                for(j=0;j<26;j++)
                    if(prime[j]==temp)
                       print("%c",j+65);
                 temp=input[i]%temp;
            }
         
}
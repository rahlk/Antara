#include <stdio.h>
#include <stdlib.h>
#define ld long long int
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        int i,j,l,c,flag,n1=0,n2=0,n3=0,j1;
        ld n;
        scanf("%lld %d",&n,&l);
        ld ar[l];
        char str[l+2];
        for(i=0;i<l;i++)
        {
             scanf("%lld",&ar[i]);
        }
        ld prime[26]={0};
        for(i=n,c=25;c>=0;i--)  ///Finding Prime NO.Starting from n and less than Until 26 prime no is not founded.
         {   flag = 0;
             for(j=2;j<=(i/2);j++)///use <=i/2  yeh loop 26*(attempt to find prime no. times) chalega
             {
                 if(i%j==0)
                 {flag = 1;
                 break; }
             }
             if(flag==0)
                {
                prime[c] = i;
                c--;  }
            if(c<0)
            {  break; }
         }

         for(i=0;i<l;i++)
      {    for(j=0;j<26;j++)
          {
              if(ar[i]%prime[j]==0)
              {   n1 = j;                ///26  Times chalta hai ye Loop.
                 break;
              }
          }
          for(j1=n1+1;j1<26;j1++)
         {
              if(ar[i]%prime[j1]==0)
              {  n2 = j1;
                 break;
              }
         }
         if( i==(l-1))
          {  if(n3==n1)
             { str[i] = (65+n3);
               str[i+1] = (65+n2); }
             else if(n3==n2)
             { str[i] = (65+n3);
               str[i+1] = (65+n1); }
             break;
          }
             for(j=0;(j<26)&&(i<l-1);j++)
            {
              if(ar[i+1]%prime[j]==0)
              {   n3 = j;
                 if(n3==n1)
                 {  //n3 = n2;
                    str[i] = (65+n2);
                    break;
                 }
                 else if( n3==n2)
                 {
                     //n3 = n1;
                     str[i] = (65+n1);
                     break;
                 }
              }
            }
        //str[i] = (65+n3);
     }

      printf("Case #%d: %s\n",k,str);
    }
    return 0;
}
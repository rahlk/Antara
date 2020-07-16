#include <stdio.h>
#define ld long int
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        ld l,c,flag=0,n1=0,n2=0,j1=0;
        ld n,i,j;
        scanf("%ld %ld",&n,&l);
        ld ar[l];
        int st[102]={0};
        for(i=0;i<l;i++)
        {
             scanf("%ld",&ar[i]);
        }
        ld prime[26];
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
       // for(j=0;j<26;j++)
        // printf("%ld ",prime[j]);
    for(j=0;j<26;j++)
           {  if((ar[0]%prime[j])==0)
                {  n1 = j;
                   break;   }
           }
    for(j=n1+1;j<26;j++)
           {   if((ar[0]%prime[j])==0)
                {  n2 = j;
                   break;   }
           }
        if((ar[1]%prime[n1])==0)
            { st[0] = 65+n2;
            j1 = n1;  }
        else if((ar[1]%prime[n2])==0)
            {
              st[0] = 65+n1;
              j1 = n2;  }
       for(i=1;i<l;i++)
       {
           st[i] = 65+j1;
        
         for(j=0;j<26;j++)
           {  if((ar[i]/prime[j1]) == prime[j])
                {  j1=j;
                   break;   }
           }
         
       }
       st[l] = 65+j1;
      printf("Case #%d: ",k);
      for(i=0;i<=l;i++)
      {        printf("%c",st[i]);  }
      printf("\n");
    }

    return 0;
}

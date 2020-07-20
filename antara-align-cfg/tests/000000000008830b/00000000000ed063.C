#include <stdio.h>
#define ld int
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        int i,j,l,c,flag=0,n1=0,n2=0,j1=0,i1;
        ld n;
        scanf("%d %d",&n,&l);
        ld ar[l];
        char st[102]={'\0'};
        for(i=0;i<l;i++)
        {
             scanf("%d",&ar[i]);
        }
        ld prime[26];
        for(i=n,c=25;c>=0;i--)  
         {   flag = 0;
             for(j=2;j<=(i/2);j++)
             {
                 if(i%j==0)
                 {flag = 1;
                   break; }
             }
             if(flag==0)
             {  for(i1=0;i1<l;i1++)
               {  if(ar[i1]%i==0)
                  {  prime[c] = i;
                     c--;
                    break;}
                }
            }
              if(c<0)
               {  break; }
            
         }
       
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
            { st[0] = 'A' + n2;
            j1 = n1;  }
        else if((ar[1]%prime[n2])==0)
            {
              st[0] = 'A' + n1;
              j1 = n2;  }
       for(i=1;i<l;i++)
       {
           st[i] = 'A' + j1;
        
         for(j=0;j<26;j++)
           {  if((ar[i]/prime[j1]) == prime[j])
                {  j1=j;
                   break;   }
           }
         
       }
       st[l] = 'A' + j1;
      printf("Case #%d: %s\n",k,st);
      
    }

    return 0;
}
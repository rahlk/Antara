#include <stdio.h>
#include <stdlib.h>
#define ld long long int
void sort(ld ar[],int l)
{
    ld temp;
    int i,j;
    for(i=0;i<l-1;i++)
    {
     for(j=0;j<l-i-1;j++)   
        { if(ar[i]>ar[i+1])
          { temp = ar[i];
            ar[i] = ar[i+1];
            ar[i+1] = temp;
              
          }
            
        }
    }
    
    
}
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {   int l,i,c,j1,n1=0,n2=0;
        ld n,j;//flag,n1,n2
        
        scanf("%lld %d",&n,&l);
        ld ar[l],br[l];
        char st[l+2];
        for(i=0;i<l;i++)
        {
             scanf("%lld",&ar[i]);
             ar[i] = br[i];
        }
        sort(ar,l); //pAssing to sort array
        ld prime[26]={1};
          for(j=n,c=25;c>=0;j--)
          {   if(ar[l-1] % j == 0)   
              {   prime[c] = j;
                  c--;
                  break;
              }
          }
            for(i=l-1,c=24;c>=0;i--,c--)
             {  prime[c] = ar[i]/prime[c+1];
             }
        for(i=0;i<26;i++)///checking prime no is Correct or Not.
        {   printf("%lld ",prime[i]); }
        
        

        for(j=0;j<26;j++)
           {  if((br[0] % prime[j])==0)
                {  n1 = j;
                   break; //csacsa
                  }     ///yaha pe dry run ke liye kiye hai
           }
         for(j=n1+1;j<26;j++)
           {   if((br[0] % prime[j])==0)
                {  n2 = j;
                   break; //cascas
                   }  ///yaha pe dry run ke liye kiye hai
           }
        if((br[1] % prime[n1])==0)
            { st[0] = 65+n2;
              j1 = n1;
             }    ///yaha pe dry run ke liye kiye hai
        else if((br[1] % prime[n2])==0)
            {
              st[0] = 65+n1;
              j1 = n2; 
              }   ///yaha pe dry run ke liye kiye hai
       for(i=1;i<l;i++)
       {
           st[i] = 65+j1;
              ///yaha pe dry run ke liye kiye hai
         for(j=0;j<26;j++)
           {  if((br[i] / prime[j1]) == prime[j])
                {  j1=j;
                   break;   }   ////dassacsac
           }
         
       }
       st[l] = 65+j1;
        //str[i] = (65+n3);
     

      printf("Case #%d: %s\n",k,st);
    }
    return 0;
}
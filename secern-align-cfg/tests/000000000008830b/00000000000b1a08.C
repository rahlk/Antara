#include<stdio.h>
#include <stdlib.h>
int main(int argc, char *a[])
{
   int i,j,k,q,max,t,l,n,temp;
    int* ptr;
    int* ptr1;
    char* tr;
    char mat;
    int* ctr;
    int b=0;
    int m=26;
    int c=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        scanf("%d",&l);
        
        ptr = (int*)malloc(l* sizeof(int));
        ptr1 = (int*)malloc(n* sizeof(int));
        tr = (char*)malloc(sizeof(char));
        ctr = (int*)malloc(m* sizeof(int));
        for(j=0;j<l;j++)
        {
            scanf("%d",&ptr[j]);
        }
        
        for(j=3;j<=n;j++)
        {      c=0;      
            for(k=1;k<=j;k++)
            {
                if(j%k==0)
                {
                    c++;
                }
            }            
            if(c==2)
            {
                ptr1[b]=j;
                
              b++;
            }
        }
        
        for(j=0;j<26;j++)
        {
           ctr[j]=ptr1[j];
           
        }
        
        j=0;
        for(mat = 'A'; mat <= 'Z'; ++mat)
        {
            tr[j]=mat;
            
            j++;
            
        }
        
        for(j=0;j<l;j=j+2)
        {  
            for(k=0;k<26;k++)
            {           
            
            if(ptr[j]%ctr[k]==0)
            {
              printf("%c",tr[k]); 
            }
            }
           
        }
            if(l%2==0)
            {
              j=l-1;
              temp=0;
              for(k=0;k<26;k++)
            { 
              if(ptr[j]%ctr[k]==0)
            {
              temp++;
              if(temp==2)
                printf("%c",tr[k]);
              
            }
            }
            }
    }
}

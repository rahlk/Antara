#include<stdio.h>
#include<malloc.h>
int main()
{
    int *c,n,i,j,k,ct,s1[100],s2[100],ar[100],flag,p,l,x,st1,st2;
    scanf("%d",&n);
    c=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<n;++i)
    {
        ct=c[i];
        for(j=0;ct>0;++j)
        {
          ar[j]=ct%10;
          ct=ct/10;
        }
        --j;
        
        for(k=0;k<=j;++k)
        {
            if(ar[k]==4)
            {
                s1[k]=3;
                s2[k]=1;
            }
            else
            {
                s1[k]=ar[k];
                
                
                    s2[k]=0;
                    
                
            }
        }
        st1=0;st2=0;
        for(k=0,l=0,x=1;k<=j || l<p;k++,l++,x *=10)
        {
            st1=st1 +s1[l]*x;
            st2=st2 + s2[k]*x;
        }
        printf("Case #%d: %d %d \n",i+1,st1,st2);
    }



}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
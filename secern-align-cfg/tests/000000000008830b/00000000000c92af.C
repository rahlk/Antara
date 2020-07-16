#include<stdio.h> 
#include<stdlib.h>
void ans(int a,int b,int* p,int f)
{
    int p1,p2,id,w=0,t1,temp;
    int i,j;
    float q;
   for(i=2;i<=a;i++)
    {
       p1=p[0]%i;
      
       if(p1==0)
       {
           p1=p[0]/i;
           p2=i;
           break;
       }
       
    }
    int* l=(int *)malloc((b+1)*sizeof(int));
    int* v=(int *)malloc((b+1)*sizeof(int));
   int* s=(int *)malloc((26)*sizeof(int));
   char* u=(char *)malloc((b+1)*sizeof(char));
       if(p[1]%p1==0)
       {
           t1=p1;
           p1=p2;
           p2=t1;
       }
    l[0]=p1;l[1]=p2;
    for(i=2;i<(b+1);i++)
    {
        l[i]=p[i-1]/l[i-1];
    }
 for(i=0;i<b+1;i++)
    {
        v[i]=l[i];
    }
    for(i=0;i<b+1;i++)
    {
        for(j=0;j<=(b-1);j++)
        {
            if(l[j]>l[j+1])
            {
               temp=l[j];
        l[j]=l[j+1];
        l[j+1]=temp;
            }
        }
        
    }
s[0]=l[0];
w=0;
for(i=1;i<b+1;i++)
{
if(s[w]!=l[i])
{
w++;
s[w]=l[i];
}

}

   
     for(i=0;i<b+1;i++)
    {
        for(j=0;j<26;j++)
        {
            if(v[i]==s[j])
            {
               u[i]=(65+j);
            }
        }
    }
     printf("Case #%d: %s\n",f,u);

}
int main()
{
int tc;
scanf("%d",&tc);
int lim,n;
int* x;
for(int i=0;i<tc;i++)
{
scanf("%d",&lim);
scanf("%d",&n);
x=(int *)malloc(n*sizeof(int));
for(int j=0;j<n;j++)
{
scanf("%d",&x[j]);
}
ans(lim,n,x,i+1);
}
return 0;
}

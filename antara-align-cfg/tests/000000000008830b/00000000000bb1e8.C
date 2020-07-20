#include<stdio.h> 
#include<stdlib.h>
void ans(int a,int b,int* p,int f)
{
    int min=p[0],p1,p2,id,temp,t1;
    int i;
    float q;
    for(i=1;i<b;i++)
    {
        if(p[i]<min)
        {
            min=p[i];
            id=i;
        }
    }
    for(i=2;i<100;i++)
    {
       p1=min/i;
       q=min/1;
       if((q-p1)==0)
       {
           p1=min/i;
           p2=i;
           break;
       }
       
    }
    int* l=(int *)malloc((b+1)*sizeof(int));
    int* v=(int *)malloc((b+1)*sizeof(int));
    temp=p[id+1]/p1;
       q=p[id+1]/p1;
       if((q-temp)!=0)
       {
           t1=p1;
           p1=p2;
           p2=t1;
       }
    l[id]=p1;l[id+1]=p2;
    for(i=id-1;i>=0;i--)
    {
        l[i]=p[i]/l[i+1];
    }
    for(i=id+2;i<b+1;i++)
    {
        l[i]=p[i]/l[i-1];
    }
    for(i=0;i<b+1;i++)
    {
        v[i]=l[i];
    }
    for(i=0;i<b;i++)
    {
        id=i;
        for(j=i+1;j<=(b+1);j++)
        {
            if(l[f]<x[id])
            {
                id=j;
            }
        }
        temp=l[id];
        l[id]=l[i];
        l[i]=temp;
    }
    printf("Case #%d: ",f);
     for(i=0;i<b+1;i++)
    {
        for(j=0;j<(b+1);j++)
        {
            if(v[i]==l[j])
            {
                printf("%c",(65+j));
            }
        }
    }
    printf("/n");
}
int main
{
int tc;
scanf("%d",&tc)
int lim,n;
int* p;
for(int i=0;i<tc;i++)
{
scanf("%d",&lim);
scanf("%d",&n);()
p=(int *)malloc(n*sizeof(int));
for(int j=0;j<n;j++)
{
scanf("%d",&p[j]);
}
ans(lim,n,p,i);
}
return 0;
}
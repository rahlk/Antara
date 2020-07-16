#include<stdio.h>
int main(){
    int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
    int p,q,i,j;
    scanf("%d %d",&p,&q);
    long long int x[500],y[500],x1[500],y1[500],nx[500]={},ny[500]={};
    int index1=0,index2=0;
    char d[p];
    for(i=0;i<p;i++)
    {
        scanf("%d %d %c",&x[i],&y[i],&d[i]);
        if(d[i]=='N')
        {
        x1[i]=0;
        y1[i]=y[i]+1;
        }
        else if(d[i]=='S')
        {
        x1[i]=0;
        y1[i]=y[i]-1;
        }
        else if(d[i]=='E')
        {
        x1[i]=x[i]+1;
        y1[i]=0;
        }
        else if(d[i]=='W')
        {
        x1[i]=x[i]-1;
        y1[i]=0;
        }
        
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<p;j++)
        {
          if(d[j]=='N')
           {
             if(y1[i]>y[j])
              ny[i]++;
              nx[i]++;
            
           }
           else if(d[j]=='S')
           {
             if(y1[i]<y[j])
              ny[i]++;
              nx[i]++;
            
           }
            else if(d[j]=='E')
           {
             if(x1[i]>x[j])
              nx[i]++;
              ny[i]++;
            
           }
            else if(d[j]=='W')
           {
             if(x1[i]<x[j])
              nx[i]++;
              ny[i]++;
            
           }
        }
    }
    for(i=0;i<p;i++)
    {
        if(nx[i]>nx[index1])
        index1=i;
        else if(nx[i]=nx[index1])
        {
            if(x[i]<x[index1])
            index1=i
        }
        if(ny[i]>ny[index2])
        index2=i;
        else if(ny[i]=ny[index2])
        {
            if(y[i]<y[index2])
            index2=i
        }
    }
    printf("Case #%d: ",k+1);
    printf("%d %d\n",x1[index1],y1[index2]);
    }

return 0;    
    
}

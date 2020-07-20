#include<stdio.h>
#include<math.h>
int prime(int n)
{   int i;
    for(i=2;i<=n/2;i++)
    {if(n%i==0)
    return 0;}
    return 1;
}
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void sort(int c[],int l)
{
    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < l-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < l; j++) 
          if (c[j] < c[min_idx]) 
            min_idx = j; 
  
        // Swap the found minimum element with the first element 
        swap(&c[min_idx], &c[i]); 
    } 
}
int search(int p,int q[],int l)
{
    int low=0,h=l,mid=0;
    while(low<=h)
    {
        mid=(low+h)/2;
        if(q[mid]>p)
        h=mid-1;
        if(q[mid]<p)
        low=mid+1;
        if(q[mid]==p)
        break;
    }
    return mid;
}
int main()
{
    int t,n,l,i,k,d=0;
    scanf("%d",&t);
    while(t--)
    {
        int m=0;
        scanf("%d %d",&n,&l);
        int a[l],b[l+1],c[l+1];
        for(i=0;i<l;i++)
        scanf("%d",&a[i]);
        for(i=2;i<=sqrt(a[0]);i++)
        {
            k=0;
            k=prime(i);
            if(k==1)
            {
                if(a[0]%i==0)
                d=i;
            }
            if(k==1)
            break;
        }
        if(a[1]%d==0)
        {
            b[0]=a[0]/d;
            b[1]=d;
        }
        else
        {
            b[0]=d;
        }
        c[0]=b[0];
        for(i=0;i<l;i++)
        {
            b[i+1]=a[i]/b[i];
            c[i+1]=b[i+1];
        }
        sort(c,l+1);
        char z='A';
        for(i=0;i<=l;i++)
        {
            m=search(b[i],c,l);
            printf("%c",z+m);
        }
    }
}


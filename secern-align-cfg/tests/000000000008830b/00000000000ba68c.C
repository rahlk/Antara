#include<stdio.h>
int main()
{
    int t,i,j,k,l,a[1000],f[1000],d,alpha[1000],nn,x,y,z,s[1000],ch,dup(),gcd();
    long long int n;
    void sort();
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%ld %d",&n,&l);
        for(i=0;i<l;i++)
        {
            scanf("%d",&a[i]);
        }
        d=0;
        for(j=0;j<l-1;j++)
        {
           z=gcd(a[j],a[j+1]);
           x=a[j]/z;
           y=a[j+1]/z;
           if(d==0)
           {
           f[d]=x;
           d++;
           f[d]=z;
           d++;
           }
           f[d]=y;
           d++;
           
        }
        for(i=0;i<d;i++)
        {
            s[i]=f[i];
        }
        sort(s,d);
        nn=dup(s,d);
        for(ch=65,i=0;ch<=90;ch++,i++)
        {
            alpha[ch]=s[i];
        }
        printf("Case #%d: ",k);
        for(i=0;i<d;i++)
        {
            for(ch=65;ch<=90;ch++)
            {
                if(alpha[ch]==f[i])
                {
                    printf("%c",ch);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return gcd(a - b, b);
        }
        else
        {
            return gcd(a, b - a);
        }
    }
    return a;
}
void sort(int list[],int n)
{
  long c, d, t;
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (list[d] > list[d+1])
      {
 
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}
 
int dup(int arr[], int n) 
{ 
   
    if (n==0 || n==1) 
        return n; 
  
    int temp[n]; 
  
   
    int j = 0; 
    for (int i=0; i<n-1; i++) 
  
      
        if (arr[i] != arr[i+1]) 
            temp[j++] = arr[i]; 
  

    temp[j++] = arr[n-1]; 
  
    
    for (int i=0; i<j; i++) 
        arr[i] = temp[i]; 
  
    return j; 
} 
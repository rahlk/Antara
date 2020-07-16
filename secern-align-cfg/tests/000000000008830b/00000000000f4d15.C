#include<stdio.h>
#include<math.h>
int prime(int n)
{   
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
/*void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
int partition (int c[], int low, int high) 
{ 
    int pivot = c[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (c[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&c[i], &c[j]); 
        } 
    } 
    swap(&c[i + 1], &c[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void quickSort(int c[], int low, int high) 
{ int i,j;
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(c, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(c, low, pi - 1); 
        quickSort(c, pi + 1, high); 
    } 
    for(i=0;i<high;i++)
    {int aag=0;
        if(c[i]==c[i+1])
        {
            for(j=i+1;j<high;j++)
            {
                c[j]=c[j+1];aag=1;
            }
        }
        if(aag==1)
        i--;
    }
} */
void sort(int c[],int l)
{
    int i, j, min_idx; 
    for (i = 0; i < l-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < l; j++) 
        {  if (c[j] < c[min_idx]) 
            min_idx = j;
        }
    int temp = c[min_idx]; 
    c[min_idx] = c[i]; 
    c[i] = temp;     
    } 
    for(i=0;i<l;i++)
    {
        if(c[i]==c[i+1])
        {
            for(j=i+1;j<l;j++)
            {
                c[j]=c[j+1];
            }
        }
    }
        for(i=0;i<l;i++)
    {
        if(c[i]==c[i+1])
        {
            for(j=i+1;j<l;j++)
            {
                c[j]=c[j+1];
            }
        }
    }
}
int search(int p,int q[],int l)
{
    int low=0,h=25,mid=0;
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
    int t,n,l,i,k,d;
    scanf("%d",&t);
    for(int v=1;v<=t;v++)
    {
        int m=0;
        scanf("%d %d",&n,&l);
        int a[l],b[l+1],c[l+1];
        for(i=0;i<l;i++)
        scanf("%d",&a[i]);
        for(i=2;i<=a[0];i++)
        {
            k=0;
            k=prime(i);
            if(k==1)
            {
                if(a[0]%i==0)
                {
                    d=i;
                    k=2;
                }
            }
            if(k==2)
            break;
        }
        if(a[1]%d==0)
        {
            b[0]=a[0]/d;
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
        quickSort(c,0,l);
        if(c[25]>n)
        {
            continue;
        }
        char z='A';
        printf("Case #%d: ",v);
        for(i=0;i<=l;i++)
        {
            m=search(b[i],c,l);
            printf("%c",z+m);
        }
        printf("\n");
    }
    return 0;
}

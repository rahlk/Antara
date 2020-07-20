#include<stdio.h>
#include<string.h>
#include<math.h>
int factor(int x)
{
    int i;
    for(i=2;i<=sqrt(x);i++)
        if(x%i==0) return i;
}
void swap(long long int *x,long long int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void merge(long long int *arr,long long int l,long long int m,long long int r)
{
    long long int i,j,k;
    long long int n1=m-l+1;
    long long int n2=r-m;
    long long int L[n1], R[n2];
    for (i=0;i<n1;i++)
        L[i]=arr[l+i];
    for (j=0;j<n2;j++)
        R[j]=arr[m+1+j];
    i=0,j=0,k=l;
    while (i<n1 && j<n2)
    {
        if (L[i]<=R[j])
            arr[k]=L[i++];
        else
            arr[k]=R[j++];
        k++;
    }
    while (i<n1)
        arr[k++] = L[i++];
    while (j<n2)
        arr[k++] = R[j++];
}
void mergeSort(long long int *arr,long long int l,long long int r)
{
    if (l<r)
    {
        long long int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main()
{
    int t,j;
    scanf("%d",&t);
    char ch[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(j=1;j<=t;j++)
    {
        long long int n,i,l,k=0;
        scanf("%lld %lld",&n,&l);
        long long int a[l],x[l],y[2*l],z[l+1],p=0,q[l+1],l1[26];
        for(i=0;i<l;i++)
        {
            scanf("%lld",&a[i]);
            x[i]=factor(a[i]);
            y[k++]=x[i];
            y[k++]=a[i]/x[i];
        }
        if(y[0]==y[2] || y[0]==y[3]) swap(&y[0],&y[1]);
        for(i=1;i<k-2;i+=2)
            if(y[i]==y[i+2]) swap(&y[i+1],&y[i+2]);
        z[p++]=y[0];
        for(i=1;i<k;i+=2) z[p++]=y[i];
        for(i=0;i<=l;i++) q[i]=z[i];
        mergeSort(z,0,l);
        p=0;
        l1[p++]=z[0];
        for(i=1;i<=l;i++)
            if(z[i]!=z[i-1]) l1[p++]=z[i];
        if(z[l]>n) break;
        printf("Case #%d: ",j);
        for(i=0;i<=l;i++)
        for(k=0;k<26;k++)
            if(q[i]==l1[k]) printf("%c",ch[k]);
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0) return b;
    else return gcd(b%a,a);
}


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void quicksort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int pivot = arr[r];
    int cnt = l;
    for (int i = l; i <= r; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(&arr[cnt], &arr[i]);
            cnt++;
        }
    }
        quicksort(arr, l, cnt-2);
    quicksort(arr, cnt, r);
}
int main()
{
    int T,number=1;
    scanf("%d",&T);
    while(T--)
    {
        int n,l,k,f;
        scanf("%d %d",&n,&l);
        int ci[99999],i,ll,primes[99999],s=0,j;
        for(i=0;i<l;i++)
        {
            scanf("%d",&ci[i]);
        }

        ll=gcd(ci[0],ci[1]);
        f=ci[0]/ll;
        primes[0]=f;
        primes[1]=ll;
        int e;
        int ans[26];
        ans[0]=f;
        ans[1]=ll;
        e=2;
        for(i=2;i<=l;i++)
        {
            s=primes[i]=ci[i-1]/primes[i-1];
            for(j=0;j<e;j++)
            {
                if(ans[j]==s)break;
            }
            if(j==e)
                {
                    ans[e]=s;
                    e++;
                }
        }
        e--;
        quicksort(ans,0,e);
        printf("Case #%d: ",number);
        int mid;
        k=0;
        for(j=0;j<=l;j++)
        {
            k=0;
            e=25;
            while(k<=e)
            {
                mid = (k+e)/2;
                if(ans[mid]==primes[j])
                {
                printf("%c",mid+65);
                break;
                }
                if(ans[mid]>primes[j])
                {
                    e = mid - 1;
                }
                else
                {
                    k = mid + 1;
                }
            }
        }
        printf("\n");
        number++;
    }
    return 0;
}
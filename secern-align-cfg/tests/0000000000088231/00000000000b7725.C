#include<stdio.h>
int notoarr(int n)
{
    int arr[100],arr2[100];
    int i=0,k=0,j,ob = 0,ob2=0;
    ob = n;
    while(ob>0)
    {
        arr[i] = ob%10;
        ob/=10;
        i++;
    }
    
    for(j=0;j<i;j++)
    {
        if(arr[j] == 4)
        {
            arr2[j] = arr[j] - 1;
        }
        else
        {
            arr2[j] = arr[j];
        }
    }
    while(k < i)
    {
        ob2*=10;
        ob2+=arr2[k];
        k++;
        
    }
    
    return ob2;
    
}
void main()
{
    int t,n,x=1;
    scanf("%d",&t);
    while(t>0)
    {
        int A=0,B=0,C;
        scanf("%d",&n);
        A = notoarr(n);
        B = n - A;
        printf("Case #%d: %d %d",x,A,B);
        x++;
        t--;
    }
}
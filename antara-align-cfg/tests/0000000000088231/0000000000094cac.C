#include <stdio.h>
int main()
{
    int t;
    long long int brr[10]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
    scanf("%d",&t);

    while(t--)
    {
        //for each test case code goes here
        long long int n,num;
        scanf("%llu",&n);
        int c=0;
        num=n;

        while(num>0)
        {
            c++;
            num=num/10;
        }
        //printf("%d\n",c);
        //end of this number of digits is known

        num=n;
        int i=c,j=0;
        int arr[c];
        while(i>1)
        {
            int l=i;
            long long int pow=10;
            while(l>2)
            {
                pow=pow*10;
                l--;
            }

            arr[j]=(n/pow)%10;
            j++;
            i--;
        }
        arr[j]=n%10;

        /*for(int j=0; j<c ;j++)
            printf("%d ",a[j]);

        printf("\n");*/
        //printf("c is %d",c);

        long  long int a=0,b=0;
        int k=0;
        for(int i=c-1; i >=0;i--)
        {
            if(arr[i]!=4)
            {
                a=a+arr[i]*brr[k];
                k++;
            }

            else
            {
                a=a+2*brr[k];
                b=b+2*brr[k];
                k++;
            }
        }
        printf("%llu %llu\n",a,b);

    }

    return 0;
}

#include<stdio.h>
#include<math.h>
main()
{
    int i,t;
    scanf("%li",&t);
    long long int arr[t];
    for(i=0;i<t;i++)
    {
        scanf("%li",&arr[i]);
    }
    long long int temp,dig;
    
    for(i=0;i<t;i++)
    {
        temp=arr[i];
        int h=log10(arr[i])+1;
        long long int flag[h];
        int j=log10(arr[i]);
        while(temp!=0)
        {
            dig = temp%10;
            if(dig==4)
                flag[j]=1;
            else
                flag[j]=0;
            temp/=10;
            j--;
        }
        long long int result = 0;
        int temp1;
        for( temp1=0; temp1 < h; temp1++)
        {
            result*=10;
            result+=flag[temp1];
        }
        printf("Case #%d: %li %li\n",(i+1),(arr[i]-result),result);
    }
}
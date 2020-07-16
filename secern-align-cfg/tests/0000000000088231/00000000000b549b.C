#include<stdio.h>
int main()
{
    int i,j,l,n,arr[99],A=0,B=0,R=1,k=1;
    scanf('%d',&n);
    for(i=0;i<n;i++)
    {
        scanf('%d',&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        while(R>0)
        {   
            k=arr[i];
            R=k%10;
            if(R==4)
            {
                R=R-1;
                k=k/10;
                A=k*10+R;
            }
            else
            {
                k=k/10;
                k=k-1;
                A=k*10+R;
            }
            B=k-A;
        }
        printf('Case #',i,':',' ',A,' ',B);
    }

    return 0;
}
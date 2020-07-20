#include<iostream.h>
#include<conio.h>
void main()
{
    int T,N[10],a[10],i;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>N[i];
    }
    for(i=0;i<T;i++)
    {
        N[i]/2=a[i];
    }
    for(i=0;i<T;i++)
    {
        cout<<a[i]<<" "<<a[i];
    }
}
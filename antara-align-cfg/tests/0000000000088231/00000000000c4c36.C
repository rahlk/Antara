#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
int main()
{
int n,i,a[max];
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
for(i=n-1;i>=0;i--)
cout<<a[i]<<" ";
return 0;
}
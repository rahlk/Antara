#include<stdio.h>
#include<conio.h>
#include<bits/stdc++.h>
using namespache std;
int totalNumber(int n)
{
    return 3*pow(9,n-1);
    
     
}

int main()
{
    int n=3;
    cout<<totalNumber(n);
    return 0;
}
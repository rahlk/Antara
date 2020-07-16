#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
bool isdigitpresent(int r,int t)
{
    while (r>0)
    {
        if(r%10==t)
          break;
        
        r=r/10;  
    }
    return (x>0);
}
void distribute(int x)
{
    int k,l;
    for(int q=0;q<x;q++)
    {
        for(int w=0;w<x;w++)
        {
            if(!(isdigitpresent(q,4) || isdigitpresent(w,4)))
            x=k+l;
            
        }
        printf("%d %d",k,l);
    }    
void main()
{
    
    int a,arr[i];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
       scanf("%d",&arr[i]);
    for(int j=0;j<a;j++)
        distribute(arr[j]);
        
}
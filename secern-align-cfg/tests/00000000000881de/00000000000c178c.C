#include<stdio.h>
int sender();
int main()
{
    int m[100];
    int n;
    printf("\n how many worker");
    scanf("\n %d",&n);
    m[100]=sender(n);
    return 0;
    
}
int sender(int j)
{
    int i,b,a,c;
    int f[100];
    for(a=0;a<j;a++)
    {
    printf("\n enter the working machine id");
    scanf("\n %d",c);
    printf("\n how many bits you want send for worker %d",i);
    scanf("\n%d",&i);
    printf("\n enter how many lines you send ");
    scanf("%d",&f[a]);
    } 
     return f;
} 
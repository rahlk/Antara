#include<stdio.h>
void returnuniqueprime(int arr[],int l,int arr1[])
{
    int i,j=0,t,flag=0;
    for(i=0;i<l;i++)
    {
        flag=0;
        for(t=0;t<j;t++)
        {
            if(arr1[t]==arr[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        arr1[j++]=arr[i];
    }
}
void swap(int * a,int *b)
{
    int temp= *a;
    *a=*b;
    *b=temp;
}
void selectionSort(int arr[],int n)
{
    int i,j,min_idx;
    for(i=0;i<n-1;i++)
    {
        min_idx=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx=j;
            }
        }
        swap(&arr[min_idx],&arr[i]);
    }
}
int gcd(int a,int b)
{
    int rem,j;
    int quotient;
    int divisor;
    divisor=a;
    quotient=b;
    rem=divisor%quotient;
    for(j=0;rem!=0;j++)
    {
        divisor=quotient;
        quotient=rem;
        rem=divisor%quotient;
    }
    return quotient;
}
int main()
{
    char alphabets[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char answer[100][100];
    int testcase=1,upperlim=19,l[100],input[100][100],primeused[100][200],reqprime[100][26],prime,t,k,d,b,i,j;
    int input1[100];
    scanf("%d",&testcase);
    for(i=0;i<testcase;i++)
    {
        scanf(" %d ",&upperlim);
        scanf(" %d ",&l[i]);
        for(j=0;j<l[i];j++)
        {
            scanf(" %d",&input[i][j]);
        }
        
    }
    for(i=0;i<testcase;i++)
    {
        /*prime=gcd(input[i][0],input[i][1]);
        primeused[i][0]=prime;
        k=1;
        for(j=0;j<l[i];j++)
        {
            primeused[i][k++]=input[i][j]/prime;
            primeused[i][k++]=input[i][j+1]/prime;
            if(input[i][j+2]%prime!=0)
            prime=primeused[i][k-1]; 
        }*/
        k=1;
        for(j=0;j<l[i];j++)
        {
            primeused[i][k++]=gcd(input[i][j],input[i][j+1]);
        }
        primeused[i][0]=input[i][0]/primeused[i][1];
        primeused[i][k]=input[i][l[i]-1]/primeused[i][k-1];
        
        returnuniqueprime(primeused[i],k,reqprime[i]);
        selectionSort(reqprime[i],26);
        for(j=0;j<l[i];j++)
        {
            b=1;
            for(t=0;t<26;t++)
            {
                if(j==0)
                d=t;
                if(input[i][j]%reqprime[i][t]==0&&input[i][j+1]%reqprime[i][t]==0)
                   {
                    answer[i][b++]=alphabets[t];
                    break;
                    }
                
                
            }
            
        }
        int first=input[i][0]/reqprime[i][d];
        for(t=0;t<26;t++)
        {
           if(reqprime[i][t]==first)
            {
                answer[i][0]=alphabets[t];
            }
            
        }
        answer[i][l[i]+1]='\0';
        printf("Case #%d: %s\n",i+1,answer[i]);
        
        
    }
  
}

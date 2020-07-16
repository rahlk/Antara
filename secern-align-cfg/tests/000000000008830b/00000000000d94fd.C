#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int all[26];
char abc[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char in[100][1000];
char txt[100][1000];
char a;
int mid,sta,end,t;
int N[100];
int L[100];
int lis[100][100];
int factor1(int x)              //gives the larger factor
{
    int i=0;
    for(i=0;i<26;i++)
    {
        if(x%all[i]==0)
        {
            return all[i];
        }
    }
    return 0;
}
int commonfactor(int a, int b)  //gives the common factor b/n 2 numbers
{
    int com;
    if(factor1(b)==factor1(a))
    {
        mid=factor1(b);
        sta=a/mid;
        end=b/mid;
    }
    else if((b/factor1(b))==factor1(a))
    {
        mid=factor1(a);
        sta=a/mid;
        end=b/mid;
    }
    else if(a/factor1(a)==factor1(b))
    {
        mid=factor1(b);
        sta=a/mid;
        end=b/mid;
    }
    else
    {
        mid=a/factor1(a);
        sta=a/mid;
        end=b/mid;
    }
    return 0;
}
int prime26(int n)              //finds the prime numbers for all[] array
{
    int i=0;
    int j=0,k=0;
    int c=1;
    for(i=n;i>0;i--)
    {
        c=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0 && i!=2)
                c=0;
        }
        if(c==1)
        {
            all[k]=i;
            k++;
        }
        if(k==26)
            break;
    }
    return 0;
}
int input(int i)                //takes input and seprates into int array lis[]
{
    int j=0;
    scanf("%s\n",in[i]);
    char *p=strtok(in[i]," ");
    while(p != NULL)
    {
        lis[i][j]=atoi(p);
        p=strtok(NULL," ");
        j++;
    }
    return 0;   
}
int tostrmap(int x)             //maps int from lis to alphabets
{
    int i,j;
    for(i=0;i<26;i++)
    {
        if(x==all[i])
        {
            a=abc[i];
        }
    }
    return 0;
}
int tostring(int i)             //uses tostrmap to convert lis to string
{
    int j,k,l=0;
    for(j=0;j<L[i]-1;j++)
    {
        commonfactor(lis[i][j],lis[i][j+1]);
        tostrmap(sta);
        txt[i][l]=a;
        tostrmap(mid);
        txt[i][l+1]=a;
        tostrmap(end);
        txt[i][l+2]=a;
        l++;
    }
    return 0;    
}
int main()
{
    int i=0; 
    scanf("%d",&t);
    while(i<t)
    {
        scanf("%d %d",&N[i],&L[i]);
        input(i);
        prime26(N[i]);
        
        tostring(i);
        i++;   
    }
    i=0;
    while(i<t)
    {
        printf("Case #%d: %s\n",(i+1),txt[i]);
        i++;
    }
    return 0;
}
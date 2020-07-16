#include<stdio.h>
#include<string.h>
int prime(int a)
{
    int count=0;
    for(int i=1;i<a;i++)
    {
        if((a%i)==0)
        count++;
    }
    if(count==1)
    return a;
    else
    return prime(a+1);
}
char countprime(int p)
{
    char B='A';
    for(int i=3;i<=p;i++)
    {
        int count=0;
        for(int j=1;j<=p;j++)
        {
            if(i>j)
            {
                if((i%j)==0)
                count++;
            }
        }
        if(count==1)
        {
            B++;
            if(i==p)
            {
                B--;
                return B;
            }
        }
    }
}
int main()
{
int T;
scanf("%d",&T);
if((T>=1)&&(T<100))
{
for(int i=1;i<=T;i++)
{
int N,L,a;
scanf("%d %d\n",&N,&L);
int n[L],p=0;
char str[L];
if((L>=1)&&(L<=100))
{
    for(int j=0;j<L;j++)
    {
    scanf("%d",&n[j]);
    int b=1;
    char B='A';
    if(p<1)
    {
    do
    {
        b=b+1;
        a=prime(b);
        if(a==b)
        {
            B++;
        }
    }while((n[j]%a)!=0);
    B--;
    p=n[j]/a;
    str[j]=B;
    }
    else{
        char B=countprime(p);
        str[j]=B;
        p=n[j]/p;
    }
    }
    str[L]=countprime(p);
    str[L+1]='\0';
}
printf("Case #%d:%s\n",i,str);
}
}
}
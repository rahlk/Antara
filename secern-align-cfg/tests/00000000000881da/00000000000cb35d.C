#include<stdio.h>
int f(int n,char s2[],int i)
int main()
{
int n,t,i,j;
char s2[2000],s1[2000];
scanf("%d",&t);
for(i=0;i<t;i++)
{

scanf("%d",&n);
scanf("%s",s2);
if(f(n,s2))
{
    printf("%s",s2);
}
//int l=strlen(s);

}return 0;
}
int f(int n,char s2[],int i)
{
    
    if(n==1)
    return 0;
    int row1=1,column1=1,row2=1,column2=1;
    //int l=strlen(s);
    while(i<2n-2)
    {
    if(row1==row2&& column1==column2)
    {
        if(s2[i]=='S')
        {
            s1[i]='E';
            column1=column1+1;
            row2=row2+1;
            if(row1==n && column1==n )
            return 1;
             if(row1>n ||column1>n )
            return 0;
        }
        else
        {
            s1[i]='S';
            row1+=1;
            column2+=1;;
             if(row1==n && column1==n )
            return 1;
             if(row1>n || column1>n )
            return 0;
        }
    }
    else
    {
        s1[i]='E';
            
            if(f(n-1),s2,i+1)
            return 1;
            else
            {s1[i]='S';
            if(f(n-1),s2,i+1)
            return 1;
            else return 0;
            }
    }
    
    i++;
    }
    if(row1==n && column1==n)
    return 1;
    else return 0;
}
#include <iostream>
#include<stdio.h>
#include<stack>
using namespace std;



int main()
{
    stack<char>s;
    int n,i,j,k;
    int p=0;
    char cnt[101],tmp[101],arr[101];
    char p1[101],p2[101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",arr);

        for(k=0;arr[k]!='0';k++)
        {
            s.push(arr[k]);
        }
        for(j=0;j<s.size();j++)
        {
            tmp[j]=arr[j];
        }
        for(j=0;j<s.size();j++)
        {
            if(arr[j]=='4')
            {
                arr[j]='3';
            }
        }
        for(j=0;j<s.size();j++)
        {
            cnt[j]=(tmp[j]-'0')-(arr[j]-'0');
        }
        printf("Case #%d: ",i);
        for(int i=0;i<s.size();i++)
            printf("%c",arr[i]);
        printf(" ");
        for( int i=0;i<s.size();i++)
        {
            if(cnt[i]!=0)
                p++;
            if(p==0)
                printf("%d",cnt[i]);
        }
        puts("");
        
        
        
    }



}





















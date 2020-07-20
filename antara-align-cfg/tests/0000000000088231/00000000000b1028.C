
#include<stdio.h>

#define ll long long int

using namespace std;


int main()
{
int t;
scanf("%d",&t);
for(ll j=1;j<=t;j++){
char s[101];

scanf("%s",&s);

int n=0;
for(n;s[n]!='\0';n++);

char c[n];
c[n]='\0';
int k=0;
for(int i=n-1;i>=0;i--)
    {
    if(s[i]=='4')
        {s[i]='3';
        c[i]='1';
        k=i;
        }else
        c[i]='0';

    }
if(n>1)
printf("Case #%d: %s %s",j,s,c+k);
else
printf("Case #%d: %s %c",j,s,c[0]);
}
return 0;
}

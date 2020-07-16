#include <stdio.h>
#include <string.h>
#include <math.h>
#define max 10000
int toint(char str[])
{
    int len = strlen(str);
    int i, num = 0;

    for (i = 0; i < len; i++)
    {
        num = num + ((str[len - (i + 1)] - '0') * pow(10, i));
    }

   return num;
}



int main() {
int t,n;
int k=0,count=0;
scanf("%d",&t);
char p[max];
int len=0;
while(t--){
    k++;
    char s[max];
    scanf("%s",s);
int n=toint(s);
  len=strlen(s);
    printf("Case #%d: ",k);
int j=0;
for(int i=0;i<len;i++) {
        if(s[i]=='4')  { s[i]='2';
                        }
}
printf("%d %d\n",toint(s),n-toint(s));



}
}
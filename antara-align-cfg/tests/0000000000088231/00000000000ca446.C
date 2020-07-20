#include<stdio.h>
int main()
{
int t,t1=1;
scanf("%d",&t);
while(t--){
int n,a,b;
char string[10],string1[10];
scanf("%d",&n);
sprintf(string,"%d",n);
int i=0;
while(string[i]!='\0')
{
   if(string[i]=='4')
      {string1[i]='1';
        string[i]--;}
    else string1[i]='0';
    i++;
}
string1[i]='\0';
sscanf(string,"%d",&a);
sscanf(string1,"%d",&b);
printf("Case#%d : %d %d",t1,a,b);
t1++;
 }
 return 0;
}
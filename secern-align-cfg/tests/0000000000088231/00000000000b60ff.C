#include<stdio.h>
int main()
{int t,i,m,n;
scanf("%d",&t);
int a[t];
for(i=0;i<t;i++)
scanf("%d",&a[i]);
for(i=0;i<t;i++)
{m=1;n=a[i]-1;
      while(1)
 {if(test(m,n))
 {printf("Case #%d: %d %d\n",i+1,m,n);
 break;}//end of main while
 m++;n--;}
}//end of for
}//end of main

int test(int m,int n)
{int c=0,div;
    while(m>0)
{div=m%10;
if(div==4) {c++;break;}
m=m/10;}
 while(n>0)
{div=n%10;
if(div==4) {c++;break;}
n=n/10;}
if(c==0)return 1;
else return 0;
}//end of test
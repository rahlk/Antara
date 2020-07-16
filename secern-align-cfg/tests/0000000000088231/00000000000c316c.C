#include<stdio.h>
#include<math.h>
int main()
{int t,i,m,n;
scanf("%d",&t);
int a[t];
for(i=0;i<t;i++)
scanf("%d",&a[i]);
for(i=0;i<t;i++)
{m=sub(a[i]);
n=a[i]-m;
if(m>n)
{m=m+n;
n=m-n;
  m=m-n;
}
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
if(c==0)
 {while(n>0)
{div=n%10;
if(div==4) {c++;break;}
n=n/10;}}
if(c==0)return 1;
else return 0;
}//end of test

int sub(int a)
{int div,rev=0,i=0;
while(a>0)
    {div=a%10;
    if(div==4)div=3;
    rev=div*pow(10,i)+div;
    i++;
    a=a/10;
    if(div==4)break;}
    //printf("%d",rev);
    return rev;
}

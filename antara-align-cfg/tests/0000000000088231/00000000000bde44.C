#include<stdio.h>
void main()
{ unsigned long N,M,N1,N2,N3,n1,n2,p;
unsigned long d,d1,d2,c,c1,c2;
c=0;
c1=c2=1;
p=2;
loop:printf("Enter the amount");
scanf("%lu",&N);
M=N;
while(M>0)
{ d=M%10;
M=M/10;
if(d==4)
{ c=c+1;
}
}
if(c==0)
{printf("\namount enerted is invalid");
goto loop;
}
loop1:while((c1!=0)&&(c2!=0))
{ N1=N/p;
N2=N-N1;
n1=N1;
n2=N2;
c1=1;
c2=1;
while(n1>0)
{ d1=n1%10;
n1=n1/10;
if(d1==4)
{c1=c1+1;
}
}
if(c1>1)
{p=p+1;
goto loop1;
}
if(c1==1)
{ c1=0;
}
while(n2>0)
{ d2=n2%10;
n2=n2/10;
if(d2==4)
c2=c2+1;
}
if(c2>1)
{ p=p+1;
    goto loop1;
}
if(c2==1)
c2=0;
}
 N3=N1+N2;
printf("\n%lu %lu %lu",N1,N2,N3);
exit(0);
}
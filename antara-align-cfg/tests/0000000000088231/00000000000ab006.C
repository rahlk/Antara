#include<stdio.h>

int main()

{

int t,n,a,b,c2,c1,d,k,p,c,j;

int i,num;
i=0;

scanf("%d",&t);


while(i<t)

{

scanf("%d",&n);

d=0;

num=n;

//while(num>0)

//{

//d++;

//num=num/10;

//}

//printf("number of digits are %d",d);

p=n;

num=n;

k=0;
a=0;
while(num>0)

{

k++;



p=num%10;
num=num/10;


if(p==4)

{

c=1;

j=0;

while(j<k-1)

{

c=c*10;

j++;

}

a=c*(p-1)+a;

}
else
{
c=1;

j=0;


while(j<k-1)

{

c=c*10;

j++;

}


a=a+c*p;
}


}




b=n-a;
printf("Case #%d: %d %d",i,a,b);
i++;

}



return 0;

}
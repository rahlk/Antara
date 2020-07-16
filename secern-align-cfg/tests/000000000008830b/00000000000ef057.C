#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int T,N,L;
	scanf("%d",&T);
int x=1;
	
	while(x<=T)
	{
	scanf("%d %d",&N,&L);
	int num[L];
	char y[L+1];
	
           
for(int i=0;i<L;i++)
{
scanf("%d",&num[i]);
}
int cipher[2*L];
int j=0;
for(int i=0;i<L;i++)

{
int f=2;
while(f<num[i])
{
int h=1;int o=0;
while(h<=f)
{
if(f%h==0)
o++;
h++;
}
if(o==2)//then f is prime
{
if(num[i]%f==0)
{
cipher[j]=f;
cipher[j+1]=num[i]/f;
j+=2;
break;
}
}
f++;
}
}

int alpha[26]={0,0};
int count=0;
int c=0;
for(int i=0;i<2*L;i++)
{
count=0;
for(int s=0;s<c;s++)
if(cipher[i]!=alpha[s])
count++;
if(count==c)
{
alpha[c]=cipher[i];
c++;
}
}

//sorting
for(int i=0;i<c;i++)
for(j=0;j<c-1-i;j++)
{
if(alpha[j]>alpha[j+1])
{
int temp=alpha[j];
alpha[j]=alpha[j+1];
alpha[j+1]=temp;
}
}

//sorted array of cipher code for all the alphabets
//resultant array of alphabets
int index=0;
int m=0;
for(int i=0;i<2*L;i++)
{
int val=cipher[i];
if(i>0)
{
if((val==cipher[i-1])||(val==cipher[i-2]))
{
for(int s=0;s<c;s++)
if(val==alpha[s])
index=s;
}
else 
{
val=cipher[i+1];
for(int s=0;s<c;s++)
if(val==alpha[s])
index=s;
}
i++;
}
else 
{
for(int s=0;s<c;s++)
if(val==alpha[s])
index=s;
i++;
}
char c=index+65;
printf("%c",index+65);
y[m]=c;
m++;
}
	    printf("\ncase#%d : %s\n",x,y);
	    x++;
	}
	
	
	
	return 0;
}



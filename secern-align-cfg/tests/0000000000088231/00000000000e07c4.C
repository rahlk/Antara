#include<stdio.h>

#include<math.h>


int main()

{
    
int num;
    
int num1=0;
    
int num2=0;
    
printf("Enter the number\n");
    
scanf("%d",&num);
    
int duplicate = num;
    
int length = 0;
    
int i = 0;
    
int numArr[100];
    
int secArr[100];
    
while(duplicate!=0)
    
{
        
numArr[i]=0;
        
i++;
        
duplicate=duplicate/10;
        
length++;
        
secArr[i]=0;
    
}
//printf("Length:- %d\n",length);
duplicate=num;
for(i=length;i>0;i--)
{
numArr[i]=(duplicate%10);
        
//printf("numArr[%d]= %d\t duplicate = %d\n",i,numArr[i],duplicate);
        
//printf("*%d***\n",numArr[i]);
        
duplicate=duplicate/10;
    
}

int abc;
abc=0;   
for(i=length;i>=1;i--)
    
{
        
if(numArr[i]==4)
        
{
            
numArr[i]=3;
            
secArr[i]=1;

abc=1;        
}
        
//printf("%d\t%d\n",numArr[i],secArr[i]);
    
}

if(abc==0) return 0;
if(abc==1)
{    
for(i=1;i<=length;i++)
    
{
        
num1=num1*10+numArr[i];
        
num2=num2*10+secArr[i];
    
}
    
printf("%d\n%d",num1,num2);


}
return 0;
}
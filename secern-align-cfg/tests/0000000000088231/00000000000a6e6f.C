#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int T,N,i,j,k=1,A,B,temp,count=0,new_num=0;
    scanf("%d",&T);
    while(T--)
    {  
       scanf("%d",&N);
       temp=N;
       while(temp!=0)
       {
           temp=temp/10;
           count++;
       }
       temp=N;
       for(i=0;i<count;i++)
       {
           temp=temp%10;
           if(temp!=4)
           {
               j=pow(10,i)*0;
           }
           else
           {
               j=pow(10,i)*1;
           }
           
           new_num=new_num+j;
           temp=temp/10;
           
       }
       
       A=N-new_num;
       B=N-A;
       
       printf("Case #%d : %d %d\n"k,A,B);
       k=k+1;
       
       return 0;
    }
       
       printf("Case #%d : %d %d\n",i,A,B);
       
    }
    return 0;
}
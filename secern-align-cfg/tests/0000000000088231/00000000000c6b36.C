#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
int j;
int t;
int temp1,temp2,temp;
int a,b,p,q;
int A[100];
scanf("%d",&t);
if(t<1||t>100)
exit(0);
int i;
for(i=0;i<t;i++)
{
    scanf("%d",&A[i]);
    if(A[i]>1000000000)
        exit(0);
}

char buffer[20]="";
char buff1[20]="";
char buff2[20]="";
for(i=0;i<t;i++)
{
    snprintf(buffer,20,"%d",A[i]);
    if(strstr(buffer,"4")==0)
        exit(0);
    /*int temp=A[i];
    int d;
    while(temp)
    {
        d=temp%10;
        if(d==4)
        break;
        temp/=10;
    }
    if(temp==0)
        exit(0);*/
        
    a=temp=A[i];
    b=0;
    int flag=0;
    while(1)
    {
        a=--a;
        b=++b;
        p=a;
        q=b;
        snprintf(buff1,20,"%d",p);
        snprintf(buff2,20,"%d",q);
        if(strstr(buff1,"4")==NULL && strstr(buff2,"4")==NULL)
            {   
                  printf("Case %d : %d %d",i+1,p,q);
                  break;
            }
        /*while(p&&q)
        {
           temp1=p%10;
           temp2=q%10;
           if(temp1==4||temp2==4)
           break;
           temp1/=10;
           temp2/=10;
        }*/
        //if(temp1==0 && temp2==0)
      
    }
}
return 0;

}

    
    
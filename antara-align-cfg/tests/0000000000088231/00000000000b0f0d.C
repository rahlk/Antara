#include<stdio.h>
#include<stdlib.h>
 void foregone(int t,int y)
 {
     int A,B,c=0,x,i,e;
     A=B=t/2;
     x=A;
     while(x!=0)
     {
        x=x/10;
        c++;
     }
     int* a=(int *)malloc(c*sizeof(int));
     int* b=(int *)malloc(c*sizeof(int));
     x=A;
     for(i=0;i<c;i++)
     {
        a[i]=x%10;
        b[i]=x%10;
        x=x/10;
        if(a[i]==4)
        {
            a[i]++;
            b[i]--;
        }
        
     }
     if(t%2!=0)
        {
            a[0]=a[0]+2;
            b[0]--;
            if(a[0]==4||b[0]==4)
            {
                a[0]++;
                b[0]--;
            }
        }
     A=B=0;
     e=1;
     for(i=0;i<c;i++)
     {
         A=A+(a[i]*e);
         B=B+(b[i]*e);
         e=e*10;
     }
     printf("Case #%d: %d %d\n",y,A,B);
    
 }
int main()
{
    int T;
    scanf("%d",&T);
    int test;
    for(int i=0;i<T;i++)
    {
        scanf("%d",&test);
        foregone(test,i+1);
    }
    return 0;
    
}
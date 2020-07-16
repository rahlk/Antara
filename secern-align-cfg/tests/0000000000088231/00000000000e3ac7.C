#include<stdio.h>
#include<math.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,rem,count=0;
        scanf("%d",&n);
        int m=n;
        while(m!=0)
        {
            count++;
            m=m/10;
        }
        int x[count];
       for(int i=0;i<count;i++)
       {
           int rem1=n%10;
           x[count-i-1]=rem1;
           n=n/10;
       }
       int a[count],b[count];
       for(int j=0;j<count;j++)
       {
           if(x[j]==4)
           {
               a[j]=2;
               b[j]=2;
           }
           else
           {
               a[j]=x[j];
               b[j]=0;
           }
        }
        
       for(int k=0;k<count;k++)
       {
           printf("%d",a[k]);
       }
       printf(" ");
       int p=0;
       for(int i=0;i<count;i++)
       {
           if(b[i]!=0)
           { p=i; break; }
       }
       for(int j=p;j<count;j++)
       {
           printf("%d",b[j]);
       }
       printf("\n");
    }
    
	// your code goes here
	return 0;
}





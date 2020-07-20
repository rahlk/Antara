#include<stdio.h>
int main()
{
    int T,N,i,j,n,c,z,K,k,l,a[10];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        printf("enter N\n");
      scanf("%d",&N);
      n=0;
      K=N;
      while(K!=0)
      {
     K=K/10;
     n++;
      }
      printf("n=%d\n",n);
      c=1;
      for(l=0;l<n;l++)
      {
          c=c*10;
      }
      c=c/10;
      printf("c=%d\n",c);
      for(j=0;j<n;j++)
      {
          if((N%10)==4)
            a[j]=1;
          else
            a[j]=0;
            N=N/10;
       printf("%d\t",a[j]);
      }
printf("c=%d\n",c);
      z=0;
      for(k=(n-1);k>=0;k--)
      {
        z=c*(a[k])+z;
      printf("%d ",a[k]);
        c=c/10;

      }
      printf("c=%d\n",c);

    printf("%d",z);
    }
}

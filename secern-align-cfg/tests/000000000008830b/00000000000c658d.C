#include<stdio.h>
int hcf(int a,int b)
{
    if(b==0)
        return(a);
    else
        hcf(b,a%b);
}
int main(){
int i,t;
scanf("%d",&t);
for(i=0;i<t;i++)
{
    long long int n,len,j;
    scanf("%lld %lld",&n,&len);
    long long int arr[len];
    for(j=0;j<len;j++)
    {
        scanf("%lld",&arr[j]);

    }
    int forw,back;
    for(j=0;j<len;j++)
    {
        if(arr[j]!=arr[j+1])
        {
            forw=j;
            back=j+1;
            break;
        }
    }
    int hcfa;
    if(arr[forw]>arr[back])
        hcfa=hcf(arr[forw],arr[back]);
        else
            hcfa=hcf(arr[back],arr[forw]);
            long long int ans[len];
    ans[forw+1]=hcfa;
     while(forw>=0)
     {
         ans[forw]=arr[forw]/ans[forw+1];
         forw--;
     }
     while(back<len)
     {
         ans[back+1]=arr[back]/ans[back];
         back++;
     }
     long long int c,d,sorted[len+1],swap;
     for(j=0;j<len+1;j++)
        sorted[j]=ans[j];
      for (c=0;c < len+1;c++)
  {
    for (d = 0 ; d < len+1- c ; d++)
    {
      if (sorted[d] > sorted[d+1]) /* For decreasing order use < */
      {
        swap       = sorted[d];
        sorted[d]   = sorted[d+1];
       sorted[d+1] = swap;
      }
    }
  }
 // for(c=0;c<len+1;c++)
   //     printf("%lld  ",sorted[c]);
     //   printf("\n");
  long long int fin[26];
      fin[0]=sorted[0];d=0;
      for(c=1;c<len+1;c++)
      {
          if(sorted[c]!=sorted[c-1])
          {
              d++;
              fin[d]=sorted[c];
          }
      }
   //   for(c=0;c<len+1;c++)
     //   printf("%lld  ",fin[c]);
      printf("Case #%d: ",i+1);
      char ak[len+2];
      int q=0;
      for(c=0;c<len+1;c++)
      {
          for(d=0;d<26;d++)
          {
              if(ans[c]==fin[d]){
                ak[q]=65+d;q++;   
                break;}
          }
      }
printf("%s\n",ak);
  }
}


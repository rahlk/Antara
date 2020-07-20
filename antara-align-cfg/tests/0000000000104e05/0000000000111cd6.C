#include<stdio.h>
#include<string.h>
main()

{

char a[100][100];
 unsigned long long int j1,l1,t,n,i,j,l,c,count=0,m,k=1;
 int arr[10000];
    scanf("%lu",&t);
     while(t--){
     count=0;
    scanf("%lu",&n);
    for(i=0;i<n;i++)
    {
       scanf(" %[^\n]",a[i]);
    }

for(i=0;i<n;)
 {
   l=strlen(a[i]);
   l1=strlen(a[i+1]);
    j=l-1;
    j1=l1-1;
    c=0; m=0;

             while(j>=0 && j1>=0){
               if(arr[c]==-1)
                 continue;
               if(a[i][j]==a[i+1][j1])
                 {
                  m=1;
                  c++;
                 }
                else
                 break;
                     j--;j1--;}
               arr[c]=-1;
                if(m==1)
                  count+=2;
  if(m==0)
   i=i+1;
   else
    i+=2;
if(i==n-1 || i==n-2)
  break;

 }
 printf("Case #%d: %d\n",k,count);
 k++;
}

}


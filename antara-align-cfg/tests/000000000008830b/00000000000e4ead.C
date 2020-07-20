#include<stdio.h>
long int checkprimenumber(long int n);
long int sort(long int array[], long int n);
long int removeduplicates(long int arr[], long int n);
long int main()
{
 long int f,y,T,k,n,i,flag,c=0,p[10000],l,v[10000],m[10000],j,temp1,temp2,s[10000],first,last,middle;
 char t[10000],r[1000][1000];
 scanf("%d",&T);
 for(k=1;k<=T;k++)
 {
  scanf("%d %d",&n,&l);
  //storing prime numbers in p
  p[0]=2;
  p[1]=3;
  for(i=4;i<n;i++)
  {
   flag=checkprimenumber(i);
   if(flag==1)
   {
    p[c]=i;
    c=c+1;
   }
  }
  //storing values in v
  for(i=0;i<l;i++)
  {
   scanf("%d",&v[i]);
  }
  /*finding the 1st 2 values of m which when multiplied
  gives the 1st value of v such that the 2nd value of v
  if divided by the 2nd value of m will give 0 as remainder*/
  for(i=0;i<=c;i++)
  {
   for(j=i;j<=c;j++)
   {
    temp1=p[i]*p[j];
    if(temp1==v[0])
    {
     if(v[1]%p[i]==0)
     {
      m[1]=p[i];
      m[0]=p[j];
     }
     else if(v[1]%p[j]==0)
     {
      m[1]=p[j];
      m[0]=p[i];
     }
    }
   }
  }
  /*finding the values of m after 2nd position such that the value of v
  when divided by the value of m will give the vaule of the next m.*/
  for(i=1;i<l;i++)
  {
   m[i+1]=v[i]/m[i];
  }
  /*pintf("\n");
  for(i=0;i<l+1;i++)
  {
   pintf("%d ",m[i]);
  }*/
  //copying all values of m to s
  for(i=0;i<l+1;i++)
  {
   s[i]=m[i];
  }
  /*pintf("\n");
  for(i=0;i<l+1;i++)
  {
   pintf("%d ",s[i]);
  }
   pintf("\n");*/
  //sorting s in ascending order
  sort(s,l+1);
  /*pintf("\n");
  for(i=0;i<l+1;i++)
  {
   pintf("%d ",s[i]);
  }*/
  //eliminating duplicate values in s
  f=removeduplicates(s,l+1);
  /*pintf("\n f=%d \n",f);
  for(i=0;i<f;i++)
  {
   pintf("%d ",s[i]);
  }
  pintf("\n");*/
  /*for each value of m, finding the position of it in s
  and storing i in t (the position of the value in t
  is the same as that of m)*/
  for(i=0;i<l+1;i++)
  {
   first=0;
   last=25;
   middle=(first+last)/2;
   while(first<=last)
   {
    if(s[middle]<m[i])
    {
     first=middle+1;
    }
    else if(s[middle]==m[i])
    {
     t[i]=65+middle;
    //  pintf("%d ",t[i]);
     break;
    }
    else
    {
     last = middle-1;
    }
    middle = (first+last)/2;
   }
  }
  for(i=0;i<l+1;i++)
  {
   r[k][i]=t[i];
  }
  //pintf("\nCase #%d: %s",k,t);
 }
 for(k=1;k<=T;k++)
 {
  printf("\nCase #%d: %s",k,r[k]);
 }
 return 0;
}
long int checkprimenumber(long int n)
{
 long int j, flag=1;
 for(j=2;j<=n/2;++j)
 {
  if(n%j==0)
  {
   flag=0;
   break;
  }
 }
 return flag;
}

long int sort(long int array[], long int n)
{
 long int c,d,swap;
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 return 0;
}

long int removeduplicates(long int arr[], long int n)
{
 long int temp[10000],i,j=0;
 for(i=0;i<n-1;i++)
 {
  if(arr[i]!=arr[i+1])
  {
   temp[j++]=arr[i];
  }
 }
 temp[j++]=arr[n-1];
 for(i=0;i<j;i++)
 {
  arr[i]=temp[i];
 }
 return j;
}

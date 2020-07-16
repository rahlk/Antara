int fact(int f,int r[],int d)
{
   int i;
   for(i=2;i<f/2;i++)
    if(f%i==0)
    {
	r[d]=i;
	d++;
    }

    return d;
}
int prime(int n)
{
  int i,c=0;
  for(i=1;i<=n;i++)
   if(n%i==0)
     c++;

   if(c==2)
     return 0;
   else
     return 1;
 }
int main()
{
  int i,w,min,max,t,l,a,m,n;
  char c[26]={'A','B','C','D','E','F','G','H','I','J','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  int s[26],r[100];
  scanf("%d",&t);
  while(t!=0)
  {
  int d=0,j=0;
  scanf("%d%d",&n,&l);
    for(i=0;i<l;i++)
    {
    scanf("%d",&a);
    d=fact(a,r,d);
  }
  for(i=1;i<d-1;i++)
  {   if(r[i]!=r[i+1] && r[i-1]==r[i+1])
     {
       w=r[i-1];
       r[i-1]=r[i];
       r[i]=w;
      }
      if(r[i]!=r[i+1] && r[i+2]==r[i])
     {
       w=r[i+1];
       r[i+1]=r[i+2];
       r[i+2]=w;
      }
      if(r[i]!=r[i+1] && r[i+2]==r[i-1])
     {
       w=r[i+1];
       r[i+1]=r[i+2];
       r[i+2]=w;
       w=r[i];
       r[i]=r[i-1];
       r[i-1]=w;
      }

   }
  max=min=r[0];
  for(i=0;i<d;i++)
  {
     if(r[i]<min)
      min=r[i];
     if(r[i]>max)
      max=r[i];
   }
   for(i=min;i<=max;i++)
   {
     if(prime(i)==0)
     {
	s[j]=i;
	j++;
     }
   }
   for(i=0;i<d-1;i=i+2)
   {
      m=r[i];
      if(r[i]==r[i+1])
       i++;
      for(j=0;j<26;j++)
      {
	if(s[j]==m)
	  printf("%c",c[j]);
      }
    }

      m=r[d-1];
      if(r[i]==r[i+1])
       i++;
      for(j=0;j<26;j++)
      {
	if(s[j]==m)
	  printf("%c",c[j]);
      }
      t--;
   }
 return 0;
  }
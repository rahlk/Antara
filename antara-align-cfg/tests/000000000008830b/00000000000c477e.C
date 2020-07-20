#include<stdio.h>
#include<stdlib.h>



void sort(int l,int r,unsigned long long int *a) 
{
   if(r<=l)
   	return;

   else 
   {
      int p=a[r];
      int pp = partition(l,r,p,&a[0]);
      sort(l,pp-1,&a[0]);
      sort(pp+1,r,&a[0]);
   
   }
}



void plaintext(int q, unsigned long long int *arr, int n)
{
	unsigned long long int *o, *sorted, i, pos;
	char *output;
	o=(unsigned long long int*)malloc((n+1)*sizeof(unsigned long long int));
	sorted=(unsigned long long int*)malloc((n+1)*sizeof(unsigned long long int));
	output=(char*)malloc((n+1)*sizeof(char));

	o[1]=gcd(arr[0], arr[1]);

	o[0]=arr[0]/o[1];
	o[2]=arr[1]/o[1];

	for(i=3; i<n+1; i++)
	{
		o[i]=arr[i-1]/o[i-1];
	}

	for(i=0; i<n+1; i++)
		sorted[i]=o[i];

	sort(0, n, sorted);

	removeDuplicates(sorted, n+1);

	for(i=0; i<n+1; i++)
	{
		pos=binarysearch(0, 25, sorted, o[i]);
		output[i]=pos+65;

	}


	printf("Case #%d: ", q+1);
	for(i=0; i<n+1; i++)
		printf("%c", output[i]);

	printf("\n");


}


int removeDuplicates(unsigned long long int *arr, int n) 
{ 
    if (n==0 || n==1) 
        return n; 

    int i, j = 0; 
  
    for (i=0; i < n-1; i++) 
        if (arr[i] != arr[i+1]) 
            arr[j++] = arr[i]; 
  
    arr[j++] = arr[n-1]; 
  
    return j; 
} 

void swap(int x,int y,unsigned long long int *a) 
{
   int temp=a[x];
   a[x]=a[y];
   a[y]=temp;
}

int partition(int l,int r,int p,unsigned long long int *a) 
{
   int lp=l-1;
   int rp=r;

   while(1) {
      while(a[++lp]<p){}


      while(rp>0&&a[--rp]>p){}

      if(lp >= rp)
         break;
      else
         swap(lp,rp,&a[0]);

   }


   swap(lp,r,&a[0]);
   return lp;
}


int gcd(unsigned long long int n1, unsigned long long int n2)
{
	/*while(n1!=n2)
    {
        if(n1>n2)
            n1=n1-n2;

        else
            n2=n2-n1;
    }

    return n1;*/
    if(n2==0)
        return n1;
        
    else
        return gcd(n2, n1 % n2);
}


int binarysearch(int lo, int hi, unsigned long long int *A, unsigned long long int key)
{
	int mid;

	while(lo<=hi)
    {
        mid=((lo+hi)/2);

        if(A[mid]<key)
            lo=mid+1;

        else if(A[mid]>key)
            hi=mid-1;

        else break;

    }

    return mid;

}



int main()
{
	int t, i, j, b;
	unsigned long long int a, *cipher;
	
	scanf("%d",&t);


	for(i=0; i<t; i++)
	{
		
		scanf("%llu %d", &a, &b);

		if(i==0)
			cipher=(unsigned long long int*)malloc(b*sizeof(unsigned long long int));

		for(j=0; j<b; j++)
			scanf("%llu", &cipher[j]);

		plaintext(i, cipher, b);

	}

}


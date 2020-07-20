#include<stdio.h>
long int crypt[100000],factor1[100000],factor2[100000],sortedFactor[100000];

long int gcdCal(long int a,long int b){
   long int t;
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
return a;
}
void merge(long int arr[], long int l, long int m, long int r)
{
	long int i, j, k;
	long int n1 = m - l + 1;
	long int n2 = r - m;
	long int L[n1], R[n2];
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1+ j];
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}


	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(long int arr[], long int l, long int r)
{
	if (l < r)
	{  long int m = l+(r-l)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}
int main(){

long int num,len,itr,gcd;
int testcase,tc;
scanf("%d",&testcase);
for(tc=1;tc<=testcase;tc++){

scanf("%ld %ld\n",&num,&len);
for(itr=0;itr<len;itr++){
    scanf("%ld",&crypt[itr]);
}
 for(itr=0;itr<len;itr++){
    if(itr==0){
      continue;
    }
    else{
        gcd=gcdCal(crypt[itr],crypt[itr-1]);
        factor1[itr]=gcd;
        factor2[itr]=gcd;
    }
 }
    factor1[0]=factor2[0]=crypt[0]/factor1[1];
    factor1[len]=factor2[len]=crypt[len-1]/factor1[len-1];


mergeSort(factor1,0,len);

   long int jj=0;
for (itr = 1; itr <=len; itr++)
   {
     if (factor1[itr] != factor1[jj])
     {
       jj++;
       factor1[jj] = factor1[itr];
     }
   }

long int mid=factor1[jj/2],midpos=jj/2,value,it;


printf("Case #%d: ",tc);
for(itr=0;itr<=len;itr++){
    value=factor2[itr];

    if(value>mid){
        for(it=midpos;it<=jj;it++){
            if(factor1[it]==value){
                printf("%c",65+it);
            }
        }
    }
    else{
        for(it=0;it<=midpos;it++){
            if(factor1[it]==value){
                printf("%c",65+it);
            }
        }
    }
}
printf("\n");
}
}

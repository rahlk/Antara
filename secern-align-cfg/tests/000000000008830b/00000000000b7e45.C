#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

       
        if (arr[mid] == x)
            return mid;

       
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

     
        return binarySearch(arr, mid + 1, r, x);
    }

   
    return -1;
}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    
    int L[n1], R[n2];

    
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

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
 
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}
int main(){
        int a[100],b[100+1],alpha[26];
        int t,j,n,l,i,count,all=0i,result,key;
        scanf("%d",&t);

        for(j=0;j<t;j++){
	    result=0;
	    all=0;
            scanf("%d",&n);
            scanf("%d",&l);
	    for(i=0;i<l;i++){
		    scanf("%d",&a[i]);
	    }
	    count=2;
	    while(count<n){
	 	    if(a[0]%count==0){
			    break;
		    }
		    else{
			    count++;
		    }
	    }
	    b[0]=count;
	    for(i=1;i<l+1;i++){
		    b[i]=a[i-1]/b[i-1];
	    }
	
		
	    mergeSort(b, 0,l );
	    for(i=1;i<l+1;i++){
		if(b[i-1]==b[i]){
		}
		else{
			alpha[all]=b[i-1];
			all=all+1;
		}
	    }	
	    key=count;
	    alpha[25]=b[l];
	    printf("Case #%d: ",j+1);
	    for(i=1;i<l+1;i++){
	        result = binarySearch(alpha,0,l,key);
		printf("%c",65+result);
		key=a[i-1]/key;
	    }
                result = binarySearch(alpha,0,l,key);
               printf("%c",65+result);

	    printf("\n");
	}
}



            

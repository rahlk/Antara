#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

  
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
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
        int a[100],b[100+1],c[100+1],alpha[26];
        int t,j,n,l,i,count,all=0i,result;
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
	    for(i=0;i<l+1;i++){
                    c[i]=b[i];
            }


	    mergeSort(c, 0,l );
	    for(i=1;i<l+1;i++){
		if(c[i-1]==c[i]){
		}
		else{
			alpha[all]=c[i-1];
			all=all+1;
		}
	    }
	    alpha[25]=c[l];
	    printf("Case #%d: ",j+1);
	    for(i=0;i<l+1;i++){
	        result = binarySearch(alpha,0,l,b[i]);
	    	printf("%c",65+result);
	    }
	    printf("\n");
	}
}



            

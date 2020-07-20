#include<stdio.h>
#include<stdlib.h>

int getPrimeNumber(int n1,int n2);
int* getUniqueElements(int arr[],int size);
void quickSort(int arr[],int start,int end);
int partition(int arr[],int start,int end);

int main()
{
    int numberOfTextCases;
    scanf("%d",&numberOfTextCases);
    for(int p=0;p<numberOfTextCases;p++)
    {
        int N,values;
    	scanf("%d",&N);
    	scanf("%d",&values);
    	int array[values];
    	for(int i=0;i<values;i++)
    	{
    		scanf("%d",&array[i]);
    	}
        //int array[31] = {217,1891,4819,2291,2987,3811,1739,2491,4717,445,65,1079,8383,5353,901,187,649,1003,697,3239,7663,291,123,779,1007,3551,1943,2117,1679,989,3053};
        int result[values+1],copy[values+1],res,j=0;
        for(int i=0;i<values-1;i++,j++)
        {
            res = getPrimeNumber(array[i],array[i+1]);
            if(i==0)
            {
                result[j] = array[i]/res;
                copy[j] = result[j];
                //printf("%d.%d\n",j+1,copy[j]);
                j=j+1;
            }
            result[j] = res;
            copy[j] = result[j];
            //printf("%d.%d\n",j+1,copy[j]);
            if(i==values-2)
            {
                j=j+1;
                result[j] = array[i+1]/res;
                copy[j] = result[j];
                //printf("%d.%d\n",j+1,copy[j]);
            }
        }
        quickSort(copy,0,values);
        int *uniqueArray = getUniqueElements(copy,values+1);
        // for(int i=0;i<26;i++)
        // {
            // printf("%d.%d\n",i+1,uniqueArray[i]);
        // }
        char chArray[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
		printf("Case #%d:",p+1);
    	for(int i=0;i<values+1;i++)
    	{
    	    for(int j=0;j<26;j++)
    	    {
    	        if(result[i]==uniqueArray[j])
    	        {
    	            printf("%c",chArray[j]);
    	        }
    	    }
    	}
		printf("\n");
		//free(uniqueArray);
    }
	return 0;
}

int* getUniqueElements(int arr[],int size)
{
    int *uniqueArray = (int*)malloc(sizeof(int)*26);
    int i,j,foundCheck,count=0;
    for(i=0;i<size;i++)
    {
        foundCheck = 0;
        for(j=0;j<26;j++)
        {
            if(arr[i]==uniqueArray[j])
            {
                foundCheck = 1;
                break;
            }
        }
        if(!foundCheck)
        {
            uniqueArray[count] = arr[i];
            count++;
        }
    }
    return uniqueArray;
}

void quickSort(int arr[],int start,int end)
{
	if(start>=end)
		return;
	int pIndex = partition(arr,start,end);
	quickSort(arr,start,pIndex-1);
	quickSort(arr,pIndex+1,end);
}

int partition(int arr[],int start,int end)
{
	int temp;
	int pivot = arr[end];
	int t = start,j;
	for(j=start;j<end;j++)
	{
		if(arr[j]<=pivot)
		{
			temp = arr[j];
			arr[j] = arr[t];
			arr[t] = temp;
			t=t+1;
		}
	}
	temp = arr[t];
	arr[t] = arr[end];
	arr[end] = temp;
	return t;
}

int getPrimeNumber(int n1,int n2)
{
	int i,j,result=0;
	for(i=3;i<=n1;i=i+2)
	{
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
				break;
		}
		if(j==i && n1%i==0)
		{
		    //printf("%d\n",i);
			if(n2%i==0)
			{
				result = i;
				break;
			}
			else if(n2%(n1/i)==0)
			{
				result = n1/i;
				break;
			}
		}
	} 
	return result;
}
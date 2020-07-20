#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int index1;

int Same(char* str1 , char* str2 ,int len)
{
	int row1  = 0;
	int col1  = 0;

	int row2  = 0;
	int col2  = 0;

	for(int i = 0; i < len-1 ; i++)
	{
		if(row1 == row2 && col1 == col2 && str1[i] == str2[i])
		{
			return 0;
		}

		if(str1[i] == 'E')
		{
			row1++;
		}
		else
		{
			col1++;
		}

		if(str2[i] == 'E')
		{
			row2++;
		}
		else
		{
			col2++;
		}
	}
  	return 1;
}


int compare(const void* a, const void* b) 
{ 
    return (*(char*)a - *(char*)b); 
} 
  

void swap(char* a, char* b) 
{ 
    char t = *a; 
    *a = *b; 
    *b = t; 
} 
  

int findCeil(char str[], char first, int l, int h) 
{ 
   
    int ceilIndex = l; 
  
    for (int i = l + 1; i <= h; i++) 
        if (str[i] > first && str[i] < str[ceilIndex]) 
            ceilIndex = i; 
  
    return ceilIndex; 
} 
  
void sortedPermutations(char str[],char* str2,char*str1 , int len) 
{ 
   
    int size = strlen(str); 
  
  
    qsort(str, size, sizeof(str[0]), compare); 
  
    int isFinished = 0; 
    while (!isFinished) { 
  
  
        static int x = 1;

        if(Same(str1,str2,len))
    	{
    		printf("Case #%d: %s\n",index1+1,str2);
    		isFinished = 1;
    		break;
    	}
  
        int i; 
        for (i = size - 2; i >= 0; --i) 
            if (str[i] < str[i + 1]) 
                break; 
  
      
        if (i == -1) 
            isFinished = 1; 
        else { 
  
            int ceilIndex = findCeil(str, 
                     str[i], i + 1, size - 1); 
  
            swap(&str[i], &str[ceilIndex]); 
  
         
            qsort(str + i + 1, size - i - 1, 
                  sizeof(str[0]), compare); 
        } 
    } 
} 


int main()
{
	int counter;
	unsigned int n;
	long r = scanf("%d",&counter);
	index1 = 0;
	

	while(counter > 0)
	{
		r = scanf("%u",&n);
		char* str1  = (char*)calloc(2*n-2,sizeof(char));
		char* str2  = (char*)calloc(2*n-2,sizeof(char));
		r = scanf("%s",str1);
		strcpy(str2,str1);

		sortedPermutations(str2,str2,str1,2*n-2);
	
		index1++;		
		counter--;
	}
	return 0;
}


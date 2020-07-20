
#include<stdio.h>


int main()
{
	//code
	int t, p=1;
	scanf("%d", &t);
	while(p<=t){
	    int n;
	    scanf("%d", &n);
	    int l = 2*n-2;
	    char arr[l];
	    scanf("%s", arr);
	    printf("Case #%d: ", p);
	    int i=0;
	    while(arr[i] != '\0'){
	      if(arr[i] == 'E'){
	          printf("S");
	      }else{
	       printf("E");   
	      }
	      i++;
	    }
	    printf("\n");
	    	    p++;
	}

	return 0;
}


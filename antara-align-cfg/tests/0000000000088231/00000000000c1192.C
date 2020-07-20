
#include<stdio.h> 
 
void removeZeros(char a[], int n) 
{ 

	// index to store the first 
	// non-zero number 
	int ind = -1; 

	// traverse in the array and find the first 
	// non-zero number 
	for (int i = 0; i < n; i++) { 
		if (a[i] != '0') { 
			ind = i; 
			break; 
		} 
	} 

	// if no non-zero number is there 
	if (ind == -1) { 
		
		return; 
	} 
 

	// store the numbers removing leading zeros 
	for (int i = 0; i < n - ind; i++) 
		printf("%c",a[ind + i]); 

	
} 

int main() 
{  

 int q,j;
 scanf("%d",&q);
 
 for(j=1;j<=q;j++)
 {
     char sa[]={'0','0','0','0','1','2','3','5','6','7'};
     char sb[]={'0','1','2','3','3','3','3','2','2','2'};

 char a[150];

scanf("%s",&a);

 int n = strlen(a);
 
   char b[n],c[n];
   int ca=0,x,i;
	for(  i=0;i<n;i++)
    {
     
      ca=(a[i]-'0');
        
      b[i]=sa[ca];
    
      c[i]=sb[ca];
        
    }
    

    
  printf("case %d :",j);
	removeZeros(b, n); 
  printf(" ");
  for(  i=0;i<n;i++)
  printf("%c",c[i]);
printf("\n");
 
 }
 
	return 0; 
} 

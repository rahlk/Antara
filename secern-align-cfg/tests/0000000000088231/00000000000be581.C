#include<stdio.h>
int main() {
	
int testCases,input;
int test = 1;

scanf("%d", &testCases);

while(test <= testCases) {
int i = 0,n,len;
int inputArray[1000000000],a1[1000000000],a2[1000000000];
int k,k1,j1,j,o,count;


scanf("%d", &input);
//store remainders in array
n = input;
//printf("n = %d\n", n);
while(n > 0) {
   inputArray[i] = n % 10;
   n = n / 10;
   i = i + 1;
   //printf("%d\n", i);
}
len = i;
//printf("l = %d", len);

//for(j1 = 0; j1 <= len-1; j1++) {
//	printf("j1 = %d and array = %d", j1, inputArray[j1]);
//	printf(" ");
//}
//printf("hello world");

//check if four is present in array
j = 0;
while(j<len){
    if(inputArray[j] == 4) {
       a1[j] = 3;
       a2[j] = 1;

    }else {
        a1[j] = inputArray[j];
        a2[j] = 0;
    }
    j++;
}

//printf stuff
printf("Case #%d: ", test);
for(k = len-1; k >= 0; k--) {
	
	printf("%d", a1[k]);
}
printf(" ");

/*printf(" a2[0] = %d", a2[0]);
printf("a2[1] = %d", a2[1]);
printf("a2[2] = %d", a2[2]);
printf("a2[3] = %d", a2[3]);*/
//printf("a2[len-5] = %d", a2[len-5]);
//printf("a2[len-6] = %d", a2[len-6]);
//printf("\n");
	//check if first digit is zero
		count = 0;
if(a2[len-1] == 0) { 
//printf("kjjk");1000   1111
		o = len-1;        
	
		while(o > 0) {     
			if(a2[o] == 0) { 
				count = count + 1; 
			//printf("%d", count);
			}
			o--; 
		}
	}
//	printf("count = %d\n", count);
	for(k1 =(len-1)-count; k1 >= 0; k1--) {
		printf("%d", a2[k1]);
	}


test++;
if(test != testCases)
printf("\n");
} return 0;
}


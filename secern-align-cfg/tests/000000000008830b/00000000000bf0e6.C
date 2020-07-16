#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void quicksort(int* number,int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}


void primeDivisors(int number,int N,int* a,int* b){
    for (int i=0; i<=sqrt(number); i++)
        if (number % i == 0) {
            *a = i;
            *b = number/i;
            return;
        }
}

int* cypher(int* numbers,int L, int N){
    int i,j,count=0,a,btest0,test1,countAN=0;
    int* divisors=(int*)malloc(2*L*sizeof(int));
    int* alphanum=(int*)malloc(26*sizeof(int));
    for(i=0;i<L;i++) {
        primeDivisors(numbers[i],N,divisors[count],b[count+1]);
        test0=0; test1=0;
        for(j=0;j<=count+1;j++){
            if(divisors[count]!=divisors[j]) test0=1;
            if(divisors[count+1]!=divisors[j]) test1=1;
        }
        if(test0==1) {
            alphanum[countAN]=divisors[count];
            countAN++;
        }
        if(test1==1) {
            alphanum[countAN]=divisors[count+1];
            countAN++;
        }
        count=count+2;
    }
    
    quicksort(alphanum,0,countAN-1);
    
}

int main(){
    int noCases,N,L,i,j;
    scanf("%d",&noCases);
    
    for(i=0;i<noCases;i++){
        scanf("%d",&N);
        scanf("%d",&L);
        
        int* numbers=(int*)malloc(L*sizeof(int));
        for(j=0;j<L;j++) scanf("%d",&numbers[j]);
        
        int* pangram=(char*)malloc((L+1)*sizeof(char));
        pangram=result(numbers,L,N);
        
        printf("#Case %d: ",i);
        for(j=0;j<(L+1);j++) printf("%c",pangram[j]);
        printf("\n");
        
        free(numbers); free(pangram);
    }
    
    
    return 0;
}
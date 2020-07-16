#include <stdio.h>
#include <math.h>
#include <string.h>
char plaintext[200];
long plaintext_hash[200];
long sito[10005];
long primes[10005];
char alphabet[10005];

void swap(long a, long b){
  long tmp;
  tmp = plaintext_hash[a];
  plaintext_hash[a] = plaintext_hash[b];
  plaintext_hash[b] = tmp;
}

void create_aplhabet(long len){
    long i,j,min,last;
    min = 99999999;
    last = -1;
    for(j=0;j<26;j++){
        for(i=0;i<=len;i++)
          if(plaintext_hash[i] < min && plaintext_hash[i] > last)
            min = plaintext_hash[i];
        alphabet[min] = 'A' + j;
        last = min;
        min = 99999999;
    }
}

int main(){
  long i,j,l,p,n,len,id,max,product,x,y,text_length;
  id=0;

  //compute prime numbers
  for(j=2;j<10000;j++){
    if(sito[j] != 1){
      primes[id++] = j;
      for(i=j;i<10000;i+=j){
        sito[i] = 1;
      }
    }
  }

  //create aplhabet
  scanf("%d", &p);
  for(l=1;l<=p;l++){
    scanf("%d %d", &n, &len);

    //first letter
    scanf("%li", &product);
    for(i=0;i<id;i++){
      //printf("TEST: %d %d\n", product,primes[i] );
      if(product % primes[i] == 0){
        plaintext_hash[0] = primes[i];
        plaintext_hash[1] = product / primes[i];
        break;
      }
    }
    //printf("TEST: %d %d\n", plaintext_hash[0], plaintext_hash[1]);
    //DECODE PRODUCT TO PRIME NUMBERS
    //second letter

    scanf("%li", &product);
    if(product % plaintext_hash[0] == 0)
        swap(0,1);

    plaintext_hash[2] = product / plaintext_hash[1];

    //rest letters
    for(i=2;i<len;i++){
      scanf("%li", &product);
      plaintext_hash[i+1] = product / plaintext_hash[i];
    }

    //CREATE ALPHABET AND PRINT

    create_aplhabet(len);
    for(i=0;i<=len;i++)
        plaintext[i] = alphabet[plaintext_hash[i]];

    plaintext[len+1] = '\0';
    printf("Case #%d: %s\n", l, plaintext);

  }
  return 0;
}

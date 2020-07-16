/*int main(int argc,char **argv);*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define XMEMSET(pointer,type,num) memset(pointer,0,num*sizeof(type))
#define XALLOC(type,size) (type *)malloc(size*sizeof(type));
#define LEN 1024

typedef struct HashNode 
{
  long key;
  long value;
  struct HashNode *next;  
} HashNode;


HashNode table[LEN];

void exchange(long *a,long *b)
{
  long temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

long Partition(long a[],long p,long r)
{
  long x = a[r];
  long i = p-1;
  long j = p;
  for(;j<=r-1;j++)
    {
      if(a[j]<x)
        {
          i+=1;
          exchange(&a[i],&a[j]);
        }
    }
  exchange(&a[i+1],&a[r]);
  return i+1;
}

void QuickSort(long a[],long p,long r)
{
  long q;
  if (p<r)
    {
      q = Partition(a,p,r);
      QuickSort(a,p,q-1);
      QuickSort(a,q+1,r);
    }
}


long getHashKey(key)
{
  return key%LEN;
}

void Insert(long key,long value)
{
  HashNode *node = &table[getHashKey(key)];
  HashNode *p = node->next;
  
  while(p != NULL) {

    if(p->key == key) {
      p->value = value;
      return;
    }
    
    node = p;    
    p = p->next;
  }

  HashNode *newNode = XALLOC(HashNode,1);
  XMEMSET(newNode, HashNode, 1);
  
  newNode->key = key;
  newNode->value = value;

  node->next = newNode;
}

long IsExist(long key)
{
  HashNode *node = &table[getHashKey(key)];

  HashNode *p = node->next;
  
  while(p != NULL) {
    if(p->key == key) {
      return 1;
    }
    p = p->next;
  }

  return 0;
}

long getValue(long key)
{
  HashNode *node = &table[getHashKey(key)];

  HashNode *p = node->next;
  
  while(p != NULL) {
    if(p->key == key) {
      return p->value;
    }
    p = p->next;
  }

  return 0;
}


long gcd(long a, long b) 
{ 
  if (a == 0) 
    return b;

  return gcd(b % a, a); 
} 

int main(int argc,char **argv) 
{ 

#ifdef FILEIO
  freopen("C2019in.txt","r",stdin); 
  freopen("C2019out.txt","w",stdout); 
#endif

  int T;
  int N;
  int L;
  scanf("%d\n",&T);
  long input[LEN];
  long output[LEN];
  long letter[26];

  for(int i=1;i<=T;i++)
  {
    scanf("%d\n", &N);
    scanf("%d\n", &L);

    memset(table, 0 , LEN*sizeof(HashNode));
    memset(input, 0, LEN*sizeof(long));
    memset(output, 0, LEN*sizeof(long));
    memset(letter, 0, 26*sizeof(long));
    
    for(int j=0;j<L;j++) {
      scanf("%ld", &input[j]);
    }

    for(int j=0;j<L-1;j++) {
      long temp = gcd(input[j], input[j+1]);
      if(j ==0)
        output[j] = input[j]/temp;
      
      output[j+1] = temp;

      if(j== L-2)
        output[j+2] = input[j+1]/temp;
    }
    
    int letterIndex = 0;
    for(int j=0;j<=L;j++) {
      if(IsExist(output[j]) == 0) {
        letter[letterIndex++] = output[j];
        Insert(output[j],j);      
      }
    }

    QuickSort(letter, 0, 25);

    memset(table, 0 , LEN*sizeof(HashNode));

    for(int j=0;j<26;j++) {
      Insert(letter[j],j);
    }

    printf("Case #%d: ", i);
    for(int j=0;j<=L;j++) {
      printf("%c", (int)getValue(output[j])+'A');
    }
    printf("\n");
  }

#ifdef FILEIO
  fclose(stdin);
  fclose(stdout);
#endif  
  
  return 0; 
}

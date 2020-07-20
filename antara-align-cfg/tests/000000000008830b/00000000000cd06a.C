#include <stdio.h>                                                                                                                               
#include <stdlib.h>                                                                                                                              
#include <stdbool.h>                                                                                                                             
#include <string.h>                                                                                                                              

typedef struct prime_db {
  bool is_prime;         
  bool in_use;           
  char char_val;         
}prime_db;               

typedef struct input_db {
  int c;                 
  int c1;                
  int c2;                
}input_db;               

#define MAX_DB_SIZE 10001

//Assume max N of 10000, so db of records 10001
void generate_prime_db(prime_db *pdb)          
{                                              
  int i = 0, j = 0;                            
  for (i = 0; i < MAX_DB_SIZE; i++) {          
    pdb[i].is_prime = true;                    
    pdb[i].in_use = false;                     
    pdb[i].char_val = ' ';                     
  }                                            

  for (i = 2; i*i < MAX_DB_SIZE; i++) {
    if(pdb[i].is_prime == true) {      
      for (j = 2*i; j < MAX_DB_SIZE; j = j+i) {
        pdb[j].is_prime = false;               
      }                                        
    }                                          
  }                                            

}

void reset_prime_db_marking(prime_db *pdb)
{                                         
  int i = 0;                              
  for (i = 0; i < MAX_DB_SIZE; i++) {     
    pdb[i].in_use = false;                
    pdb[i].char_val = ' ';                
  }                                       
}                                         

void mark_in_use_primes(prime_db *pdb, input_db *ip, int ip_size)
{                                                                
  int j_prime, j = 0, i = 0;                                     
  for ( i = 0; i < ip_size; i++) {                               
    for (j = 2; j < MAX_DB_SIZE; j++) {                          
      j_prime = 0;                                               
      if (pdb[j].is_prime == true) {                             
        if((ip[i].c % j)==0) {                                   
          j_prime = ip[i].c/j;                                   
          ip[i].c1 = j;                                          
          ip[i].c2 = j_prime;                                    
          //We can optimize this by counting first 26 in_use and break
          pdb[j].in_use = true;                                       
          pdb[j_prime].in_use = true;                                 
          break;                                                      
        }                                                             
      }                                                               
    }                                                                 
  }                                                                   

}

void assign_char_to_in_use_prime(prime_db *pdb)
{                                              
  char c = 'A';                                
  int i, count = 0;                            
  // if we know the first in_use idx, we can start with that
  for (i = 2; i < MAX_DB_SIZE && count < 26; i++) {         
    if(pdb[i].in_use == true) {                             
      pdb[i].char_val = c;                                  
      c++;                                                  
      count++;                                              
    }                                                       
  }                                                         

}


void dechrypt_routine(prime_db *pdb, input_db *ip, int ip_size, char *output)
{                                                                            
  // ip is max 100 ciphers, so plain text will be 1 more than input          
  int i, temp[101];                                                          
  memset(temp, 0, sizeof(temp));                                             

  if(ip[0].c1 == ip[1].c1) {
    temp[1] = ip[0].c1;     
    temp[0] = ip[0].c2;     
  } else if(ip[0].c2 == ip[1].c1) {
    temp[1] = ip[0].c2;            
    temp[0] = ip[0].c1;            
  } else if(ip[0].c1 == ip[1].c2) {
    temp[1] = ip[0].c1;            
    temp[0] = ip[0].c2;            
  } else if(ip[0].c2 == ip[1].c2) {
    temp[1] = ip[0].c2;            
    temp[0] = ip[0].c1;            
  }                                

  for ( i = 1; i < ip_size; i++) {
    if (temp[i] == ip[i].c1) {    
      temp[i+1] = ip[i].c2;       
    } else {                      
      temp[i+1] = ip[i].c1;       
    }                             
  }                               

  for (i = 0; i <=ip_size; i++) {
    output[i] = pdb[temp[i]].char_val;
  }                                   

}

int main()
{
  int T, N, L;
  int i, j;
  prime_db pdb[MAX_DB_SIZE];

  generate_prime_db(pdb);

  scanf("%d", &T);
  for( i = 1; i <= T; i++) {
    scanf("%d %d", &N, &L);

    input_db input[L];
    char output[L+2];
    memset(output, '\0', sizeof(output));

    for (j = 0; j < L; j++) {
      scanf("%d", &input[j].c);
    }

    reset_prime_db_marking(pdb);

    mark_in_use_primes(pdb, input, L);

    assign_char_to_in_use_prime(pdb);

    dechrypt_routine(pdb, input, L, output);

    printf("Case #%d: %s\n", i, output);
  }
  return 0;
}

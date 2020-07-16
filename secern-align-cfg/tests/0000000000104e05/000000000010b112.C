#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<memory.h>
using namespace std;


typedef struct HashNode {
    char* key;
    void* val;
    struct HashNode* next;
} HashNode;

typedef struct HashTable {
    int size;
    HashNode** hash_lists;
} HashTable;

HashTable* HashInit(int size) {
    HashTable* hash = (HashTable*)malloc(sizeof(HashTable));
    if (hash == NULL) {
        return NULL;
    }
    hash->size = size;
    hash->hash_lists = (HashNode**)malloc(sizeof(HashNode*)*size);
    if (hash->hash_lists == NULL) {
        free(hash);
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        hash->hash_lists[i] = NULL;
    }
    return hash;
}

unsigned int HashIndex(char* key, int size) {
    unsigned int index = 0;
    while(*key != '\0') {
        //index += (index << 5) + *key++;
        index += *key++;
    }
    
    return index % size ;
}

void HashPut(HashTable* hash, char* key, void* val) {
    if (hash == NULL || key == NULL) {
        return;
    }
    unsigned int index = HashIndex(key, hash->size);
    HashNode* new_node = (HashNode*)malloc(sizeof(HashNode));
    if (new_node == NULL) {
        return;
    }
    new_node->key = (char*)malloc(sizeof(char)*(strlen(key)+1));
    if (new_node->key == NULL) {
        free(new_node);
        return;
    }
    new_node->next = hash->hash_lists[index];
    hash->hash_lists[index] = new_node;
    strcpy(new_node->key, key);
    new_node->val = val;
    return;
}

void* HashGet(HashTable* hash, char* key) {
    if (hash == NULL || key == NULL) {
        return NULL;
    }
    unsigned int index = HashIndex(key, hash->size);
    HashNode* node = hash->hash_lists[index];
    while (node != NULL) {
        if (strcmp(node->key, key) == 0) {
            return node->val;
        }
        node = node->next;
    }
    return NULL;
}

void HashDel(HashTable* hash, char* key) {
    if (hash == NULL || key == NULL) {
        return;
    }
    unsigned int index = HashIndex(key, hash->size);
    HashNode* node = hash->hash_lists[index];
    HashNode* prev = node;
    HashNode* next = node->next;
    while (node != NULL) {
        if (strcmp(node->key, key) == 0) {
            if (node == hash->hash_lists[index]) {
                hash->hash_lists[index] = next;
            } else {
                prev->next = next;
            }
            free(node);
        }
        prev = node;
        node = next;
    }
    return;
}

void HashDestroy(HashTable* hash) {
    if (hash == NULL) {
        return;
    }
    for (int i = 0; i < hash->size; i++) {
        HashNode* node = hash->hash_lists[i];
        HashNode* next = NULL; 
        while (node != NULL) {
            next = node->next;
            free(node);
            node = next;
        }
    }
    free(hash->hash_lists);
    free(hash);
    return;
}


int CheckFromTail(char* word, char* suffix) {
    if (word == NULL || suffix == NULL) {
        return 0;
    }
    int sfx_len = strlen(suffix);
    int wd_len = strlen(word);
    int i = sfx_len;
    int j = wd_len;
    
    for (; i > 0 && j > 0; i--, j--) {
        if (suffix[i-1] != word[j-1]) {
            return 0;
        }
    }
    if (i != 0) {
        return 0;
    }
    return 1;
}



int main() {
    int iCaseNum    = 0;
    int iCase       = 0;
    char OK[3]      = {'O','K','\0'};

    cin>>iCaseNum;

    for (iCase = 0; iCase < iCaseNum; iCase++) {
        int N = 0;
        char words[1000][51] = {0};
        int max_total = 0;
        

        cin>>N;
        for (int i = 0; i < N; i++) {
            memset(words[i], 0, 51);
            cin>>words[i];
        }

        for (int beg = 0; beg < N; beg++) {
            int chosen[1000] = {0};
            int total = 0;
            HashTable* hash = HashInit(1000);
            for (int i1 = beg; i1 < N + beg; i1++) {
                int i = i1 % N;
                if (chosen[i] != 0) {
                    continue;
                }
                int len = strlen(words[i]);
                for (int ch = 0; ch < len; ch++) {
                    if (HashGet(hash, words[i]+ch) != NULL) {
                        continue;
                    }
                    for (int w = 0; w < N; w++) {
                        if (chosen[w] != 0 || i == w) {
                            continue;
                        }
                        if (1 == CheckFromTail(words[w] , words[i]+ch)) {
                            total += 2;
                            chosen[i] = total;
                            chosen[w] = total;
                            HashPut(hash, words[i]+ch, OK);
                            printf("%s, %s, %s\n", words[i], words[i]+ch,words[w]);
                            break;
                        }
                    }
                    if (chosen[i] != 0) {
                        break;
                    }
                }
            }
            HashDestroy(hash);
            if (max_total < total) {
                max_total = total;
            }
            if (max_total == N) {
                break;
            }
        }

        cout<<"Case #"<<(iCase+1)<<": "<<max_total<<endl;
    }

    return 0;
}
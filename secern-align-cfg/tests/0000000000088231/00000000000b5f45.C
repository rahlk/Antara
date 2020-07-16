#include <stdio.h>
typedef struct node {
    unsigned long val1, val2;
    struct node * next;
} node_t;

int main()
{
    unsigned long T,N;
    scanf("%d", &T);
    node_t* head = NULL;
    node_t* prevnode = NULL;
    node_t* lastnode = NULL;
    for(int i =0; i<T;i++){
        scanf("%lu", &N);
        //printf("N %lu",N);
        lastnode = malloc(sizeof(node_t));
        
        lastnode->val1 = 0;lastnode->val2 = 0;
        
        unsigned long  digit = 1;
        while(N>0){
            unsigned long mod = (N % 10);
            N = N / 10;
            if (mod == 4){
                lastnode->val1 += 2*digit;
                lastnode->val2 += 2*digit;
            }else{
                lastnode->val1 += mod*digit;
            }
            //printf(" mod %d digit %lu: %lu %lu\n",mod,digit,lastnode->val1,lastnode->val2);
            digit *= 10;
            
        }
        
        lastnode->next = NULL;
        if (head == NULL){
            head = lastnode;
        }else{
            prevnode->next = lastnode;
        }
        prevnode = lastnode;
    }
    prevnode = head;
    int c =0;
    while(prevnode!=NULL){
        printf("Case #%d: %lu %lu\n",++c,prevnode->val1,prevnode->val2);
        prevnode=prevnode->next;
    }
    
    return 0;
}
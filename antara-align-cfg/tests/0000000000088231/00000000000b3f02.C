#include <stdio.h>
typedef struct node {
    int val1, val2;
    struct node * next;
} node_t;

int main()
{
    int T,N;
    scanf("%d", &T);
    node_t* head = NULL;
    node_t* prevnode = NULL;
    node_t* lastnode = NULL;
    lastnode = head;
    for(int i =0; i<T;i++){
        scanf("%d", &N);
        lastnode = malloc(sizeof(node_t));
        
        lastnode->val1 = 0;lastnode->val2 = 0;
        
        int digit = 1;
        while(N>0){
            int mod = N % 10;
            N = N / 10;
            if(mod <=1)
                lastnode->val1 += mod*digit;
            else if ((mod-1)*digit == 4){
                lastnode->val1 += (mod-2)*digit;
                lastnode->val2 += (2)*digit;
            }else{
                lastnode->val1 += (mod-1)*digit;
                lastnode->val2 += digit;
            }
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
        printf("Case #%d: %d %d\n",++c,prevnode->val1,prevnode->val2);
        prevnode=prevnode->next;
    }
    
    return 0;
}

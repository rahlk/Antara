#include <stdio.h>
#include <stdlib.h>

struct Node
{
  char data;
  struct Node *next;
};

void append(struct Node** head_ref, char new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    struct Node *last = *head_ref;

    new_node->data  = new_data;

    new_node->next = NULL;

    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}

void printList(struct Node *node)
{
  while (node != NULL)
  {
     printf("%c", (node->data=='E')?'S':'E');
     node = node->next;
  }
}


int main(){
    int T;
    scanf("%d", &T);

    for(int j=1;j<=T;++j){
        int len;
        char quan;
        scanf("%d", &len);

        struct Node* head = NULL;

        for(int i=0;i<=2*len-2;++i){
            scanf("%c", &quan);
            append(&head, quan);
        }

        printf("Case #%d: ", j);
        printList(head->next);

        printf("\n");
    }
    return 0;

}

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
        int data;
        struct node*rlink;
        struct node*llink;
        
};
struct node*head=NULL;
struct node*last=NULL;
struct node*current=NULL;
bool isEmpty(){
    return head=NULL;
}

void insert(int data){

    struct node *link = (struct node*) malloc(sizeof(struct node));
    
    
    
    link->data = data;
   link->llink= NULL;
   link->rlink = NULL;
   
   
   if(head==NULL) {
      head = link;
      return;
      
      current = head;
      
      // move to the end of the list
   while(current->rlink!=NULL)
      current = current->rlink;

   // Insert link at the end of the list
   current->rlink = link;
   last = link;
   link->llink = current;
}
void main()
{
    int T,N,P,i,n;
    scanf("%d",&T);
    while(i=1;i<=T;i++)
    {
    scanf("%d",&N);
    while(i=1;i<=(2N-2);i++)
    {
        void insert(int data);
    }
    }
    
     getch();   
}
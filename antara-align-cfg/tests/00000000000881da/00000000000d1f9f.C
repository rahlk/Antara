#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
        char data;
        struct node*rlink;
        struct node*llink;
        
};
struct node*head=NULL;
struct node*last=NULL;
struct node*current=NULL;
void insert(char data);

void insert(char data){

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
    int T,N,i,j,n;
    string P[];
    char data;
    scanf("%d",&T);
    while(j=1;j<=T;j++)
    {
    scanf("\n%d",&N);
    n=2N-2;
    while(i=1;i<=n;i++)
    {
        scanf("\n%c",&P[i]);
        data=P[i];
        void insert(char data));
        printf("Case #%d: ",j);
       
        
    }
    while(i=1;i<=n;i++)
    {
        if(Strcmp(P[i],E)==0)
    }
    
    }
    
     getch();   
}
//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700045
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/* Node structure
struct Node
{
    int data;
    struct Node* next;
}; */

// Should rearrange given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.
Node *rearrangeEvenOdd(Node *head)
{
   Node *link=head->next;
   Node *o=head,*e=link;
   while(o->next!=NULL && e->next!=NULL){
       o->next=e->next;
       e->next=o->next->next;
       o=o->next;
       e=e->next;
   }
   o->next=link;
   return head;
}

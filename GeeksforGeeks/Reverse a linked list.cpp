//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700005
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/* Linked List Node structure
   struct Node  {
     int data;
     struct Node *next;
  }
*/

// Should reverse list and return new head.
struct Node* reverse(struct Node *head)
{
    Node *cur=head;
    Node *prev=NULL,*nxt=NULL;
    while(cur!=NULL){
        nxt=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nxt;
    }
    return prev;
}

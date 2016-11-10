//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700171
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/* Link list Node 
struct Node {
    int data;
    struct Node* next;
}; */

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(struct Node *head)
{
   if(head==NULL)
        return -1;
    Node *fast=head,*slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}

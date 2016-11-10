//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700175
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
}; */

// Deletes middle of linked list and returns head of the modified list
struct Node* deleteMid(struct Node *head)
{
    if(head==NULL)
        return head;
    Node* fast=head;
    Node* slow=head;
    Node* temp;
    while(fast!=NULL && fast->next!=NULL){
        
        temp=slow;
        fast=fast->next->next;
        slow=slow->next;
    }
    temp->next=slow->next;
    return head;
}

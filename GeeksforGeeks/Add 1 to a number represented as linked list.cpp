//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700053
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/* Node structure
struct Node
{
    int data;
    struct Node* next;
}; */
Node *rev(Node *head)
{
    Node * prev   = NULL;
    Node * current = head;
    Node * next;
    while (current != NULL)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

// Should rearrange given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.
Node *addOne(Node *head)
{
   head=rev(head);
   //cout<<head->data<<"\n\n";
   Node *ptr=head,*prev;
   int carry=1,sum=0;
   while(ptr!=NULL){
       //cout<<"ptr->data:"<<ptr->data<<"\n";
       sum=(ptr->data)+carry;
       carry=sum/10;
       if(sum>=10){
           sum=sum%10;
       }
       ptr->data=sum;
       //cout<<"ptr->data after addition:"<<ptr->data<<"\n";
       prev=ptr;
       ptr=ptr->next;
   }
   if(carry){
       Node *newNode=(Node*)malloc(sizeof(Node));
       newNode->data=carry;
       prev->next=newNode;
       newNode->next=NULL;
   }
   
   head=rev(head);
   //cout<<head->data<<"\n\n";
   return head;
}

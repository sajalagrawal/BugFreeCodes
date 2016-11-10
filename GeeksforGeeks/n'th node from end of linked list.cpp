//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700170
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/* struct Node
 {
   int data;
   struct Node* next;
 }; */

/* Should return data of n'th node from the end of linked list */
int getNthFromLast(struct Node *head, int n)
{
    if(head==NULL)    
        return -1;
    Node *ref=head;
    Node *mainptr=head;
    int count=0;
    while(count<n){
        if(ref==NULL)
            return -1;
        ref=ref->next;
        count++;
    }
    while(ref!=NULL){
        ref=ref->next;
        mainptr=mainptr->next;
    }
    return mainptr->data;
}

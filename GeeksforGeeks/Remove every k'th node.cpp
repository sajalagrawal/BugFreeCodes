//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700297
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
};*/

/*You are required to complete this method*/
Node * deleteK(Node *head,int k)
{
    if(head==NULL || k==0)
        return head;
    Node* ptr=head;
    Node* tmp;
    if(k==1){
        while(ptr!=NULL){
            tmp=ptr;
            ptr=ptr->next;
            free(tmp);
        }
        return head;
    }
    int i=1;
    while(ptr!=NULL){
        if(i%k==(k-1) && ptr->next!=NULL){
            ptr->next=ptr->next->next;
            i++;
        }
        ptr=ptr->next;
        i++;
    }
    return head;
}


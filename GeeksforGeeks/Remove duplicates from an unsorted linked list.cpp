//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700125
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/*

The structure of linked list is the following

struct Node
{
int data;
Node* next;
};

*/


Node *removeDuplicates(Node *root)
{
    Node *ptr1=root;
    Node *ptr2,*temp;
    while(ptr1!=NULL && ptr1->next!=NULL){
        ptr2=ptr1;
        while(ptr2->next!=NULL){
            if(ptr1->data==ptr2->next->data){
                temp=ptr2->next;
                ptr2->next=ptr2->next->next;
                free(temp);
            }else{
                ptr2=ptr2->next;
            }
        }
        ptr1=ptr1->next;
    }
    return root;
}

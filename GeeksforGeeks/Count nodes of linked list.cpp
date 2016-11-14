//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700039
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/*
Count the number of nodes 
in the linked list
Node is defined as 
struct node
{
    int data;
    struct node* next;
};
 
*/

int getCount(struct node* head){
    int len=0;
    node *ptr=head;
    while(ptr!=NULL){
        len++;
        ptr=ptr->next;
    }
    return len;
}

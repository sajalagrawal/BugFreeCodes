//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700196
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
    int flag;
    Node *ptr=root,*temp;
    while(ptr->next!=NULL){
        flag=0;
        if(ptr->data==ptr->next->data){
            temp=ptr->next;
            ptr->next=temp->next;
            flag=1;
            free(temp);
        }
        if(flag==0)ptr=ptr->next;
    }
    return root;
}

//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700071
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/* Linked list Node structure
struct Node
{
    char c;
    struct Node *next;
}; */

// Compare two strings represented as linked lists
int compare(Node *list1, Node *list2) 
{
    Node *ptr1=list1,*ptr2=list2;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->c>ptr2->c)return 1;
        else if(ptr1->c<ptr2->c)return -1;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    if(ptr1!=NULL)return 1;
    if(ptr2!=NULL)return -1;
    return 0;
}

//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700004
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void display(Node *head)
{
  while(head!=NULL){
      cout<<head->data<<" ";
      head=head->next;
  }
}

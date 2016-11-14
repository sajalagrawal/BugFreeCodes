//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700019
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/*
  Return the no. of times search_for value is there in a linked list.
  The input list will have at least one element  

  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/

int count(struct node* head, int key)
{
    int count=0;
    node *ptr=head;
    while(ptr!=NULL){
        if(key==ptr->data)count++;
        ptr=ptr->next;
    }
    return count;
}

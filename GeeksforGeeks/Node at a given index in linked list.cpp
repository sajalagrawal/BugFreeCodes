//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700040
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/* Print he nth node in the linked list Node is defined as 
struct node
{
    int data;
    struct node* next;
}; */

// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
int GetNth(struct node* head, int index){

  node *ptr=head;
  int i=0;
  while(ptr!=NULL){
      if(i==index)return ptr->data;
      i++;
      ptr=ptr->next;
  }

}

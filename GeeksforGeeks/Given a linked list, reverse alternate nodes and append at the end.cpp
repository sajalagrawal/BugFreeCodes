//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700006
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }

*/
struct node* reverse(struct node* root) {
  struct node *prev,*ptr,*nxt;
  prev=NULL;
  ptr=root;
  while(ptr!=NULL){
      nxt=ptr->next;
      ptr->next=prev;
      prev=ptr;
      ptr=nxt;
  }
  root=prev;
  return root;
}

void rearrange(struct node *odd)
{
    //add code here
    if (odd == NULL || odd->next == NULL || odd->next->next == NULL)
        return;
    int count=1;
    struct node *temp=odd->next->next,*firstHead=odd,*firstEnd=odd,*secondHead=odd->next,*secondEnd=odd->next;
    while(temp!=NULL){
        if(count%2==1){
            firstEnd->next=temp;
            firstEnd=temp;
        }else{
            secondEnd->next=temp;
            secondEnd=temp;
        }
        temp=temp->next;
        count++;
    }
    secondEnd->next=NULL;
    secondHead=reverse(secondHead);
    firstEnd->next=secondHead;
}

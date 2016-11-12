//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700021
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/*
delete n nodes after m nodes
  The input list will have at least one element  
  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }

*/
void linkdelete(struct node  *head, int M, int N)
{
    struct node *ptr=head,*temp;
    int i;
    while(ptr!=NULL){
        for(i=0;i<M-1 && ptr!=NULL;i++)
            ptr=ptr->next;
        if(ptr==NULL)return;
        temp=ptr->next;
        for(i=0;i<N && temp!=NULL;i++){
            struct node* t=temp;
            temp=temp->next;
            free(t);
        }
        ptr->next=temp;
        ptr=temp;
    }
}


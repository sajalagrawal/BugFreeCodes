//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700028
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/*
  Sort the list of 0's,1's and 2's
  The input list will have at least one element  
  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }

*/


void sortList(struct node *head)
{
   node *ptr=head;
   int count[3]={0,0,0};
   while(ptr!=NULL){
       count[ptr->data]++;
       ptr=ptr->next;
   }
   ptr=head;
   int i=0;
   while(ptr!=NULL){
       if(count[i]==0)i++;
       else{
           ptr->data=i;
           count[i]--;
           ptr=ptr->next;
       }
   }
}



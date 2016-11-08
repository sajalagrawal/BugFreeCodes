//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700336
//Author- Sajal Agrawal
//Username:sajalagrawal

/*The method multiplies 
two  linked lists l1 and l2
and returns their product*/
#define mod 1000000007
/*You are required to complete this method*/
long long  multiplyTwoLists (node* l1, node* l2)
{
    long long sum1=0,sum2=0;
    node *t1=l1,*t2=l2;
    while(t1!=NULL){
        sum1=((sum1*10)%mod+(t1->data)%mod)%mod;
        t1=t1->next;
    }
    while(t2!=NULL){
        sum2=((sum2*10)%mod+(t2->data)%mod)%mod;
        t2=t2->next;
    }
    return ((sum1%mod)*(sum2%mod))%mod;
}

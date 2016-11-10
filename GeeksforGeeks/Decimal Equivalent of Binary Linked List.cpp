//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700183
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/* Below global variable is declared in code for modulo arithmetic
const long long unsigned int MOD = 1000000007; */

/* Link list Node/
struct Node
{
    bool data;   // NOTE data is bool
    struct Node* next;
}; */

// Should return decimal equivalent modulo 1000000007 of binary linked list 
long long unsigned int decimalValue(struct Node *head)
{
    long long unsigned int res=0;
    while(head!=NULL){
        res=res*2+(head->data);
        res=res%1000000007;
        head=head->next;
    }
    return res;
}

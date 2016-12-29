//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700345
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/*You are required to complete below methods*/

/*the function pushes an element
x into the stack s */
void push(stack<int> &s,int x)
{
    //Your code here
    s.push(x);
}

/*pops the top element of the
stack and returns it */
int pop(stack<int> &s)
{
    //Your code here
    if(s.empty())return -1;
    int tp=s.top();
    s.pop();
    return tp;
}

/*returns the size of the stack */
int getSize(stack<int> &s)
{
   //Your code here
   return s.size();
}

/*returns the top element 
of the stack */
int getTop(stack<int> &s)
{
   //Your code here
   if(s.empty())return -1;
   return s.top();
}

//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700346
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/*You are required to complete below methods*/

/*inserts an element x at 
the back of the queue q */
void push(queue<int> &q,int x)
{
    //Your code here
    q.push(x);
}


/*pop out the front element 
from the queue q and returns it */
int pop(queue<int> &q)
{
   //Your code here
   if(q.empty())return -1;
   int fr=q.front();
   q.pop();
   return fr;
}

/*returns the size of the queue q */
int getSize(queue<int> &q)
{
    //Your code here
    return q.size();
}

/*returns the last element of the queue */
int getBack(queue<int> &q)
{
	//Your code here
	if(q.empty())return -1;
	return q.back();
}

/*returns the first element of the queue */
int getFront(queue<int> &q)
{
	//Your code here
	if(q.empty())return -1;
	return q.front();
}

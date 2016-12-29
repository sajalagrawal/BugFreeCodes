//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700348
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/* You are required to complete below methods */

/*inserts an element x to the set s */
void insert(set<int> &s,int x)
{
    //Your code here
    s.insert(x);
}

/*prints the contents of the set s */
void print_contents(set<int> &s)
{
    //Your code here
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
        cout<<(*it)<<" ";
}

/*erases an element x from the set s */
void erase(set<int> &s,int x)
{
    //Your code here
    s.erase(x);
}

/*returns 1 if the element x is
present in set s else returns -1 */
int find(set<int> &s,int x)
{
    //Your code here
    set<int>::iterator it;
    it=s.find(x);
    if(it==s.end())return -1;
    return 1;
}

/*returns the size of the set s */
int size(set<int> &s)
{
   //Your code here
   return s.size();
}

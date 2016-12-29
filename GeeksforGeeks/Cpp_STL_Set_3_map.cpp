//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700341
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/* Adds a value with key x and value y to the map*/
void add_value(map<int,int> &m,int x,int y)
{
    //Your code here
    m[x]=y;
}

/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int,int> &m,int x)
{
  //Your code here
  if(m.count(x)==0)return -1;
  return m[x];
}

/* Prints contents of the map ie keys and values*/
void print_contents(map<int,int> &m)
{
   //Your code here
   map<int,int>::iterator it;
   for(it=m.begin();it!=m.end();it++)
        cout<<(*it).first<<" "<<(*it).second<<" ";
}

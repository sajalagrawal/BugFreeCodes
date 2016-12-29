//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700339
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/*You are required to complete below methods*/

/*inserts an element x at 
the back of the vector A */
void add_to_vector(vector<int> &A,int x)
{
	//Your code here
	A.push_back(x);
}

/*sort the vector A in ascending order*/
void sort_vector_asc(vector<int> &A)
{
	//Your code here
	vector<int>::iterator itr1=A.begin();
	vector<int>::iterator itr2=A.end();
	sort(itr1,itr2);
}

/*reverses the vector A*/
void reverse_vector(vector<int> &A)
{
	//Your code here
	reverse(A.begin(),A.end());
}

/*returns the size of the vector  A */
int size_of_vector(vector<int> &A)
{
	//Your code here
	return A.size();
}

/*sorts the vector A in descending order*/
void sort_vector_desc(vector<int> &A)
{
	//Your code here
	vector<int>::iterator itr1=A.begin();
	vector<int>::iterator itr2=A.end();
	sort(itr1,itr2,greater<int>());
}

/*prints space separated 
elements of vector A*/
void print_vector(vector<int> &A)
{
	//Your code here
	vector<int>::iterator it;
	for(it=A.begin();it!=A.end();it++)
	    cout<<(*it)<<" ";
}

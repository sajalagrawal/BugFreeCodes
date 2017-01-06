//http://www.practice.geeksforgeeks.org/problem-page.php?pid=871
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int main()
 {
	int t,i;
	cin>>t;
	while(t--){
	    string name,ans="";
	    cin>>name;
	    for(i=0;i<name.size();i++){
	        if((name[i]>='a' && name[i]<='c') || (name[i]>='A' && name[i]<='C'))
	        {
	            ans.push_back('2');
	        }
	         if((name[i]>='d' && name[i]<='f') || (name[i]>='D' && name[i]<='F'))
	        {
	           ans.push_back('3');
	        }
	         if((name[i]>='g' && name[i]<='i') || (name[i]>='G' && name[i]<='I'))
	        {
	           ans.push_back('4');
	        }
	         if((name[i]>='j' && name[i]<='l') || (name[i]>='J' && name[i]<='L'))
	        {
	            ans.push_back('5');
	        }
	         if((name[i]>='m' && name[i]<='o') || (name[i]>='M' && name[i]<='O'))
	        {
	            ans.push_back('6');
	        }
	         if((name[i]>='p' && name[i]<='s') || (name[i]>='P' && name[i]<='S'))
	        {
	            ans.push_back('7');
	        }
	         if((name[i]>='t' && name[i]<='v') || (name[i]>='T' && name[i]<='V'))
	        {
	            ans.push_back('8');
	        }
	         if((name[i]>='w' && name[i]<='z') || (name[i]>='W' && name[i]<='Z'))
	        {
	            ans.push_back('9');
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}

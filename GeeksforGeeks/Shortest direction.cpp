//http://www.practice.geeksforgeeks.org/problem-page.php?pid=821
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int main()
 {
	int t,i;
	string str;
	cin>>t;
	while(t--){
	    cin>>str;
	    int x=0,y=0;
	    for(i=0;i<str.size();i++){
	        if(str[i]=='N')y++;
	        else if(str[i]=='S')y--;
	        else if(str[i]=='E')x--;
	        else if(str[i]=='W')x++;
	    }
      //lexicographical order for o/p
	    if(x<0){
	        x=-x;
	        while(x--)cout<<"E";
	    }
	    if(y>0){
	        while(y--)cout<<"N";
	    }else if(y<0){
	        y=-y;
	        while(y--)cout<<"S";
	    }
	    if(x>0){
	        while(x--)cout<<"W";
	    }
	    cout<<"\n";
	}
	return 0;
}

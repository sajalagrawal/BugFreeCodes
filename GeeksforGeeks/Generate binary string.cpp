//http://www.practice.geeksforgeeks.org/problem-page.php?pid=884
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;

void print(string str,int index){
    if(index==str.size()){
        cout<<str<<" ";
        return;
    }
    if(str[index]=='?'){
        str[index]='0';
        print(str,index+1);
        
        str[index]='1';
        print(str,index+1);
    }
    else 
        print(str,index+1);
}
int main()
 {
	int t;
	string str;
	cin>>t;
	while(t--){
	    cin>>str;
	    print(str,0);
	    cout<<"\n";
	}
	return 0;
}

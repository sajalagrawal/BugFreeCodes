//http://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string/0
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t;
    cin>>t;getchar();
    while(t--){
        string str;
        getline(cin,str);
        
        //cout<<str;
        int start=0,end;
        while(1){			//or str.find(' ',start)==-1
            end=str.find('.',start);
            if(end==-1)end=str.size();
            //cout<<"end="<<end<<endl;
            //string token=str.substring(start,end);
            reverse(str.begin()+start,str.begin()+end);
            //cout<<str<<endl;
            start=end+1;
            if(start>=str.size())break;
        }
        reverse(str.begin(),str.end());
        cout<<str<<"\n";
    }
	return 0;
}

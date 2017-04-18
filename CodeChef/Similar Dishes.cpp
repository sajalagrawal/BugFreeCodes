//https://www.codechef.com/APRIL17/problems/SIMDISH/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int i,t;
    cin>>t;
    string str;
    while(t--){
        int count=0;
        map<string,int> mp;
        for(i=0;i<8;i++){
            cin>>str;
            mp[str]++;
        }
        map<string,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            //cout<<(*it).first<<" "<<(*it).second<<"\n";
            if((*it).second==2){
                count++;
            }
        }
        //cout<<"count="<<count<<"\n";
        if(count>=2)cout<<"similar\n";
        else cout<<"dissimilar\n";
    }
	return 0;
}

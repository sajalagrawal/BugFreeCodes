//https://www.hackerrank.com/contests/projecteuler/challenges/euler042
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
ll isTri(ll k){
    double ans=(-1+sqrt(1+8*k))/2;
    if(ans==floor(ans))return ans;
    return -1;
}
int main() {
    int i;
    int count=0;
    while(1){
        string str;
        getline(cin,str,',');
        if(str.size()==0)break;
        ll sum=0;
        str.erase(0,1);
        str.erase(str.size()-1,1);
        //cout<<str<<endl;
        for(i=0;i<str.size();i++){
            if(str[i]>='A' and str[i]<='Z')sum+=str[i]-'A'+1;
        }
        if(isTri(sum)!=-1)count++;
    }
    cout<<count<<"\n";
	return 0;
}

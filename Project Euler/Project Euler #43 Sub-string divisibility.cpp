//https://www.hackerrank.com/contests/projecteuler/challenges/euler043/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

int main() {
    int n,i;
    cin>>n;
    string str="0123456789",num;
    str.erase(n+1,9-n);
    unsigned ll ans=0;
    int cur;
    int arr[]={2,3,5,7,11,13,17};
    //cout<<str<<endl;
    while(next_permutation(str.begin(),str.end())){
        int flag=1;
        for(i=0;i<=n-3;i++){
            num=str.substr(i+1,3);
            //cout<<"str="<<str<<" num="<<num<<endl;
            cur=stoi(num);  //string to int
            if(cur%arr[i]!=0){
                //cout<<"num="<<num<<endl;
                flag=0;
                break;
            }
        }
        if(flag==1)ans+=stol(str);
    }
    cout<<ans<<"\n";
	return 0;
}

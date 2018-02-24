//https://www.hackerrank.com/contests/projecteuler/challenges/euler020
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

int solve(int n){
    //1000! has 2568 digits 
    int i,j,digit,carry;
    vector<int> vec;
    vec.pb(1);
    carry=0;
    for(i=2;i<=n;i++){
        for(j=0;j<vec.size();j++){
            digit=vec[j]*i+carry;
            if(digit>=10){
                carry=digit/10;
                digit=digit%10;
            }else{
                carry=0;
            }
            //cout<<"j="<<j<<endl;
            vec[j]=digit;
        }
        while(carry){
            vec.pb(carry%10);
            carry=carry/10;
        }
    }
    int sum=0;
    for(i=0;i<vec.size();i++){
        //cout<<vec[i]<<" ";
        sum+=vec[i];
    }
    //cout<<endl;
    vec.erase(vec.begin(),vec.end());
    
    return sum;
}
int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==0 or n==1){
            cout<<"1\n";
            continue;
        }
        cout<<solve(n)<<"\n";
    }
	return 0;
}

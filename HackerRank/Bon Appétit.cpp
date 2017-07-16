//https://www.hackerrank.com/challenges/bon-appetit/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,k,b,i,sum=0,ele;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>ele;
        if(i!=k){
            sum+=ele;
        }
    }
    cin>>b;
    if(2*b==sum)cout<<"Bon Appetit\n";
    else cout<<(b-sum/2)<<"\n";
	return 0;
}

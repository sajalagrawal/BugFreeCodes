//https://www.hackerrank.com/challenges/grading/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,k;
    cin>>n;
    while(n--){
        cin>>k;
        if(k<38)cout<<k<<"\n";
        else{
            if(k%5==3 or k%5==4)cout<<(k+5-k%5)<<"\n";
            else cout<<k<<"\n";
        }
    }
	return 0;
}

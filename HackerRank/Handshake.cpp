//https://www.hackerrank.com/challenges/handshake
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        cout<<(n)*(n-1)/2<<endl;
    }
    return 0;
}

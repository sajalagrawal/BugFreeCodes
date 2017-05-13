//https://www.hackerrank.com/challenges/restaurant
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int main() {
    int t,l,b,i,temp;
    cin>>t;
    while(t--){
        cin>>l>>b;
        if(l<b){
            temp=l;
            l=b;
            b=temp;
        }
        //cout<<"l="<<l<<"b="<<b<<endl;
        //cout<<"gcd"<<gcd(l,b)<<endl;
        int gcdd=gcd(l,b);
        cout<<(l*b)/(gcdd*gcdd)<<endl;
    }
    return 0;
}

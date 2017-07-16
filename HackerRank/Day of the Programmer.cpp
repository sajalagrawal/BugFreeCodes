//https://www.hackerrank.com/challenges/day-of-the-programmer/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
int nleap[]={31,28,31,30,31,30,31,31,30,31,30,31};
int main() {
    int n;
    cin>>n;
    if(n>=1700 and n<=1917 and n%4==0){  //julian leap
        cout<<"12.09."<<n<<"\n";
    }
    if(n>=1700 and n<=1917 and n%4!=0){  //julian non leap
        cout<<"13.09."<<n<<"\n";
    }
    if(n==1918){
        cout<<"26.09.1918\n";
    }
    if(n>=1919 and n<=2700 and (n%400==0 or (n%4==0 and n%100!=0))){  //gregorian leap
        cout<<"12.09."<<n<<"\n";
    }else if(n>=1919 and n<=2700){
        cout<<"13.09."<<n<<"\n";
    }
	return 0;
}

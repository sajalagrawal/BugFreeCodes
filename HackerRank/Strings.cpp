//https://www.hackerrank.com/challenges/c-tutorial-strings
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    string a,b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size();
    cout<<"\n"<<(a+b)<<"\n";
    char m,n,t;
    t=a[0];
    a[0]=b[0];
    b[0]=t;
    cout<<a<<" "<<b;
  
    return 0;
}

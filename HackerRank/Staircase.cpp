//https://www.hackerrank.com/challenges/staircase/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int i=0,j,s;
    for(i=1;i<=n;i++){
        for(s=n-i;s>=1;s--)cout<<" ";
        
        
        for(j=1;j<=i;j++){
            cout<<"#";
        }
        cout<<"\n";
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

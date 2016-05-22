//https://www.codechef.com/problems/COLOR
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
         int n,i=0;
         cin>>n;
         char s[n+1];
         cin>>s;
         int r=0,g=0,b=0;
         while(s[i]!='\0'){
            if(s[i]=='R')
                r++;
            else if(s[i]=='G')
                g++;
            else if(s[i]=='B')
                b++;
            i++;
         }
         if(g>=b && g>=r)
            cout<<(b+r)<<"\n";
            else if(b>=r && b>=g)
                cout<<(g+r)<<"\n";
            else if(r>=b && r>=g)
                cout<<(g+b)<<"\n";
    }
    return 0;
}

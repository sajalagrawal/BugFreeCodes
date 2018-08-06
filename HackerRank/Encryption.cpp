//https://www.hackerrank.com/challenges/encryption/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com


#include <bits/stdc++.h>

using namespace std;
#define ll long long
// Complete the encryption function below.
string encryption(string s) {
    int i,j;
    for(i=0;i<s.size();i++){
        if(s[i]==' ')s.erase(i,1);
    }
    ll l = s.size();
    //cout<<"s.size()="<<l<<endl;
    string ans="";
    float root=sqrt(l);
    ll row,col;
    
    row=floor(sqrt(l));
    col=ceil(sqrt(l));    
    if(row*col<l){
        row++;
    }
    //cout<<"row="<<row<<" col="<<col<<endl;
    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            int idx=j*col+i;
            //cout<<"idx="<<idx<<" ";
            if(idx>=s.size())break;
            ans+=s[idx];
        }
        ans+=" ";
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

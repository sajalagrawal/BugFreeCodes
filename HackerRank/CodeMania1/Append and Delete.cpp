//https://www.hackerrank.com/contests/codemania1/challenges/append-and-delete
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    int i,index=-1;
    for(i=0;i<min(t.size(),s.size());i++){
        if(s[i]!=t[i]){
            index=i;
            break;
        }
    }
    int del=0,app=0,ans=0;
    if(index!=-1){
        del=s.size()-index;
        app=t.size()-index;
        ans=del+app;
        if( (k>=ans and (k-ans)%2==0) or (k>=(t.size()+s.size())))return "Yes";
        return "No";
    }else if(index==0){
        ans=s.size()+t.size();
        if(k>=ans)return "Yes";
        return "No";
    }else if(s==t){
        ans=s.size()+t.size();
        if(k>=ans or k%2==0)return "Yes";
        return "No";
    }else{
        ans=abs(long(t.size()-s.size())); 
        //handle the case s=abc t=ab, s=abc t=abcd
        if(k>=(t.size()+s.size()) or (k-ans)%2==0 )return "Yes";
        return "No";
    }
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
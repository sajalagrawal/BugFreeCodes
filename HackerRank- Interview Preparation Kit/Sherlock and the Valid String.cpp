//https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=strings
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    int hash[26]={0};
    int i,j;
    for(i=0;i<s.size();i++)hash[s[i]-'a']++;
    //for(i=0;i<26;i++)cout<<hash[i]<<" ";
    int freq=-1;
    for(i=0;i<26;i++){
        if(hash[i]){
            freq=hash[i];
            break;
        }
    }
    int flag=0;
    for(;i<26;i++){
        if(hash[i] and hash[i]!=freq){
            flag=1;
            break;
        }
    }
    if(flag==0)return "YES";
    for(i=0;i<26;i++){
        set<int> st;
        hash[i]--;
        for(j=0;j<26;j++){
            if(hash[j])st.insert(hash[j]);
        }
        if(st.size()==1)return "YES";
        hash[i]++;
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
/*
aabbc
ans=YES
*/
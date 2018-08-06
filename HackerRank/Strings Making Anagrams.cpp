//https://www.hackerrank.com/challenges/ctci-making-anagrams/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int hash1[26]={0};
    int hash2[26]={0};
    int i;
    for(i=0;i<a.size();i++)hash1[a[i]-'a']++;
    for(i=0;i<b.size();i++)hash2[b[i]-'a']++;
    long long int ans=0;
    for(i=0;i<26;i++){
        ans+=abs(hash1[i]-hash2[i]);
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}

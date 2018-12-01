//https://www.hackerrank.com/challenges/two-strings/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    int hash1[26]={0};
    int hash2[26]={0};
    int i,j;
    for(i=0;i<s1.size();i++)hash1[s1[i]-'a']++;
    for(i=0;i<s2.size();i++)hash2[s2[i]-'a']++;
    for(i=0;i<26;i++){
        if(hash1[i] and hash2[i])return "YES";
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

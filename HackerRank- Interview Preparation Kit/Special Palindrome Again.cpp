//https://www.hackerrank.com/challenges/special-palindrome-again/copy-from/82940040?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=strings
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
// Complete the substrCount function below.
long substrCount(int n, string s) { 
    vector< pair<char,ll> > v;
    int i=0;
    while(i<n){
        ll freq=1;
        char ch=s[i];
        while(i<n-1 and s[i]==s[i+1]){
            freq++;
            i++;
        }
        v.pb(make_pair(ch,freq));
        i++;
    }
    /*
    for(i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    */
    char beforeCh=v[0].first;
    ll befChFreq=v[0].second;
    ll middleChFreq;
    char middleCh;
    ll ans=(befChFreq*(befChFreq+1))/2;
    if(v.size()>1){
        middleCh=v[1].first;
        middleChFreq=v[1].second;
        ans+=(middleChFreq*(middleChFreq+1))/2;
    }else{
        return ans;
    }
    for(i=2;i<v.size();i++){
        if(beforeCh==v[i].first and middleChFreq==1){
            ans+=min(befChFreq,v[i].second);
        }
        ans+=( v[i].second*(v[i].second+1) )/2;
		//creating window of size 3
        beforeCh=middleCh;
        befChFreq=middleChFreq;
        middleCh=v[i].first;
        middleChFreq=v[i].second;
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

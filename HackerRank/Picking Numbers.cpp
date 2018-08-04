//https://www.hackerrank.com/challenges/picking-numbers/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the pickingNumbers function below.
int pickingNumbers(vector<int> a) {
    map<int,int> mp;
    int i;
    for(i=0;i<a.size();i++){
        mp[a[i]]++;
    }
    int ans=0;
    map<int,int>::iterator it=mp.begin();
    int preve=(*it).first;
    int prevf=(*it).second;
    if(mp.size()==1)return prevf;
    it++;
    for(;it!=mp.end();it++){
        int cure=(*it).first;
        int curf=(*it).second;
        //cout<<preve<<" "<<prevf<<" "<<cure<<" "<<curf<<endl;
        if(cure-preve==1)ans=max(ans,prevf+curf);
        ans=max(ans,curf); //for input 3 in comments
        preve=cure;
        prevf=curf;
    }
    if(ans==0)ans=1;
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    int result = pickingNumbers(a);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}


/*
5
1 1 1 1 1 
ans=5

5
1 3 5 7 9
ans=1

6
1 3 3 3 5 9
ans=3
*/
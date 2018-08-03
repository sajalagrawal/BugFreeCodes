//https://www.hackerrank.com/challenges/time-conversion/problem
////Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    if(s=="12:00:00AM")return "00:00:00";
    if(s=="12:00:00PM")return "12:00:00";
    string meridiem=s.substr(s.size()-2,2);
    string res=s;
    int hr=stoi(s.substr(0,2));
    s.erase(s.size()-2,2);
    if(meridiem=="AM"){
        res=to_string(hr%12);
        if(res.size()==1)res.insert(0,"0");
        res+=s.substr(2);
        return res;
    }else if(meridiem=="PM"){
        if(hr!=12)res=to_string(hr+12);
        else res=to_string(hr);
        res+=s.substr(2);
        return res;
    }
    return "";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

/*
12:45:54PM
12:45:54
*/

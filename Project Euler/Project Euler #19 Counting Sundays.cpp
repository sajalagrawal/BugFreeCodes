//https://www.hackerrank.com/contests/projecteuler/challenges/euler019
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

//http://mathforum.org/dr.math/faq/faq.calendar.html
//https://stackoverflow.com/questions/4588854/calculating-day-of-week-in-years-greater-than-9999
bool check(ll m,ll y){
    y=(y%400)+1600;
    if(m==1 or m==2){
        m=10+m;
        y=y-1;
    }
    else m=m-2;
    ll d=y%100;
    ll c=y/100;
    ll rem=1+floor((double)(13*m-1)/(double)5)+d+floor((double)d/(double)4)+floor((double)c/(double)4)-2*c;
    if(rem%7==0)return true;
    return false;
}

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll y1,y2,m1,m2,d1,d2,y,m,count=0;
        cin>>y1>>m1>>d1;
        cin>>y2>>m2>>d2;
        
        if(d1>1){
            d1=1;
            if(m1<=11)m1++;
            if(m1==12){
                m1=1;
                y1++;
            }
        }
        if(y1>y2){
            cout<<"0\n";
            continue;
        }
        if(y1==y2 and m1>m2){
            cout<<"0\n";
            continue;
        }
        if(y1==y2 and m1==m2 and d1>d2){
            cout<<"0\n";
            continue;
        }
        
        //checking first yr
        int till;
        if(y1==y2)till=m2;
        else till=12;
        for(m=m1;m<=till;m++){
                if(check(m,y1)){
                    //cout<<"m="<<m<<" y="<<y1<<endl;
                    count++;
                }
        }
        if(y1==y2)goto end;
        //checking other than 1st and last yr
        for(y=y1+1;y<y2;y++){
            for(m=1;m<=12;m++){
                if(check(m,y)){
                    //cout<<"m="<<m<<" y="<<y<<endl;
                    count++;
                }
            }
        }
        //checking for last year y=y2
        m=1;
        for(;m<=m2;m++){
            if(check(m,y2)){
                //cout<<"m="<<m<<" y="<<y2<<endl;
                count++;
            }
        }
        end:;
        cout<<count<<"\n";
    }
	return 0;
}

/*
1
1907 12 2
1907 12 5

1
1901 7 1
1901 12 30
*/
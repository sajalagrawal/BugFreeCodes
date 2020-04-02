//#include<bits/stdc++.h>

class Solution {
public:
    map<int, bool> seen;
    
    bool isHappy(int n) {
        cout<<"input="<<n<<endl;
        if(n==1)return true;
        while(true){
            n=sumOfSq(n);
            cout<<"n="<<n<<endl;
            if(n == 1)return true;
            if(seenBefore(n))return false;
        }
        //return true;
    }
    
    bool seenBefore(int num){
        if(seen[num]==true)return true;
        else seen[num]=true;
        return false;
    }
    
    int sumOfSq(int n){
        int sum = 0;
        while(n){
            cout<<"mod n="<<n<<endl;
            int mod = n%10;
            sum+=mod*mod;
            n=n/10;
        }
        return sum;
    }
};

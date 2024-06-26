//https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/description/

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size(), twoFreq=0;
        vector<int> result(n, 0);
        vector<int> freq(n+1, 0);
        for(int i=0;i<n;i++){
            freq[A[i]]++;
            freq[B[i]]++;
            if(A[i]==B[i]){
                //same number at same indices - count once 
                twoFreq++;
            }else{
                if(freq[A[i]]==2)twoFreq++;
                if(freq[B[i]]==2)twoFreq++;
            }
            result[i]=twoFreq;
        }
        return result;
    }
};
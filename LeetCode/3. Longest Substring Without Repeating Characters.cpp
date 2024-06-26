//https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int left = 0;
        unordered_set<char> charSet;  //hash table organized into buckets internally 
        //https://en.cppreference.com/w/cpp/container/unordered_set
        
        for(int right = 0; right < s.size(); right++){
            while(charSet.find(s[right]) != charSet.end()){  //avg O(1), worst O(n)
                charSet.erase(s[left]);  //avg O(1), worst O(n)
                left++;
            }
            charSet.insert(s[right]);  //avg O(1), worst O(n)
            maxLen = max(maxLen, right-left+1);
        }
        return maxLen;
    }
};


//sample test - abcacxyzkl



class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int left = 0;
        set<char> charSet; //Sets are usually implemented as Red–black trees
        //https://en.cppreference.com/w/cpp/container/set

        for(int right = 0; right < s.size(); right++){
            while(charSet.find(s[right]) != charSet.end()){ //avg (logn), worst (logn)
                charSet.erase(s[left]); //avg (logn), worst (logn)
                left++;
            }
            charSet.insert(s[right]);  //avg (logn), worst (logn)
            maxLen = max(maxLen, right-left+1);
        }
        return maxLen;
    }
};


//sample test - abcacxyzkl
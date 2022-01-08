//https://leetcode.com/problems/unique-email-addresses/

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> uniqueEmails;
        for(int i=0;i<emails.size();i++){
            uniqueEmails.insert(cleanEmail(emails[i]));
        }
        return uniqueEmails.size();
    }
    
    string cleanEmail(string email){
        cout<<email<<endl;
        int startIgnoring=0, isDomainReached=0;
        for(int i=0;i<email.size();i++){
            if(email[i]=='@')isDomainReached=1;
            if(!isDomainReached){
                if(startIgnoring or email[i]=='.'){
                    email.erase(email.begin()+i);
                    i--;
                }
                if(email[i]=='+'){
                    startIgnoring=1;
                    email.erase(email.begin()+i);
                    i--;
                }
            }
            
        }
        cout<<email<<endl;
        return email;
    }
};

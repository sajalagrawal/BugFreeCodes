//https://www.codechef.com/problems/SUPVIL
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    string str;
	    int flag=0;
	    int heros=1,villains=1;
	    while(n--){
	        cin>>str;
	        if(flag==0){
    	        if(str.size()<=2)villains++;
    	        else if(str.substr(str.size()-3,3)=="man")heros++;
    	        else villains++;
    	        if(heros>=villains+2){
    	            cout<<"superheroes\n";
    	            flag=1;
    	       
    	        }else if(villains>=heros+3){
    	            cout<<"villains\n";
    	            flag=1;
    	           
    	        }
	        }
	    }
	    if(flag==0)cout<<"draw\n";
	}
	return 0;
}

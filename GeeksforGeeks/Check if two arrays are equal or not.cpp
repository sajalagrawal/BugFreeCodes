//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1698
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include<iostream>
#include<map>
using namespace std;
int main()
 {
	//code
	int t,n,k,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    map<int,int> mapA;
	    map<int,int>mapB;
	    for(i=0;i<n;i++){
	        cin>>k;
	        mapA[k]++;
	    }
	    for(i=0;i<n;i++){
	        cin>>k;
	        mapB[k]++;
	    }
	    map<int,int>::iterator ia=mapA.begin();
	    map<int,int>::iterator ib=mapB.begin();
	    int flag=1;
	    /*cout<<"mapA:";
	    for(;ia!=mapA.end();ia++)
	        cout<<(*ia).first<<" "<<(*ia).second<<"\n";
	    ia=mapA.begin();
	    ib=mapB.begin();*/
	    for(;ia!=mapA.end(),ib!=mapB.end();ia++,ib++){
	        if((*ia).first!=(*ib).first or (*ia).second!=(*ib).second){
	            flag=0;
	            break;
	        }
	    }
	   cout<<flag<<"\n";
	}
	return 0;
}

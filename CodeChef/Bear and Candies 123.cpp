//https://www.codechef.com/COOK81/problems/CANDY123/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
 
int main() {
    int t,a,b,i;
    cin>>t;
    //cout<<"t="<<t<<endl;
    while(t--){
        cin>>a>>b;
        int sumA=0,sumB=0,countA=1,countB=2,flag=0;
        
        for(i=0;i<1000;i++){
            sumA+=countA;
            countA+=2;
            if(sumA>a){
                cout<<"Bob\n";
                flag=1;
                //cout<<"sumA="<<sumA<<endl;
                break;
            }
            sumB+=countB;
            countB+=2;
            if(sumB>b){
                cout<<"Limak\n";
                //cout<<"sumB="<<sumB<<endl;
                flag=1;
                break;
            }
            
        }
        if(flag==0){
            cout<<"Bob\n";
        }
    }
	return 0;
}

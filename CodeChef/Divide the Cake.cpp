//https://www.codechef.com/problems/ANUDTC
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(360%n==0)printf("y ");
        else printf("n ");
        if(n<=360)printf("y ");
        else printf("n ");
        if(n<=26)printf("y \n");
        else printf("n \n");
    }
	return 0;
}

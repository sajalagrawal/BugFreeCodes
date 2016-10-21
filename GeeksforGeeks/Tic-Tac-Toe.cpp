//http://www.practice.geeksforgeeks.org/problem-page.php?pid=668
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;
int isWinner(char a[][3],char ch);
int main() {
	int t,i,j,flag,xCount,oCount;
	cin>>t;
	while(t--){
	    flag=0;
	    char a[3][3];
	    xCount=oCount=0;
	    for(i=0;i<3;i++){
	        for(j=0;j<3;j++){
	            cin>>a[i][j]; //input can be blank too
	            if(a[i][j]=='X')xCount++;
	            else if(a[i][j]=='O') oCount++;
	        }
	    }
	    if(abs(xCount-oCount)>1){
	        flag=1;
	    }
	    if(xCount<oCount && flag==0)flag=1;
	    if(flag==0){
	        if(isWinner(a,'X')==1 && isWinner(a,'O')==1)flag=1;
	    }
	    if(flag==0 && isWinner(a,'X')==1 && (xCount-oCount)!=1)flag=1;
	    if(flag==0 && isWinner(a,'O')==1 && xCount!=oCount)flag=1;
	    if(flag==0)cout<<"Valid\n";
	    else if(flag==1)cout<<"Invalid\n";
	}
	return 0;
}

int isWinner(char a[][3],char ch){
    int i;
    for(i=0;i<3;i++){
        if(a[i][0]==ch && a[i][1]==ch && a[i][2]==ch)return 1;
        if(a[0][i]==ch && a[1][i]==ch && a[2][i]==ch)return 1;
    }    
    if(a[0][0]==ch && a[1][1]==ch && a[2][2]==ch)return 1;
    if(a[0][2]==ch && a[1][1]==ch && a[2][0]==ch)return 1;
    
    return 0;
}

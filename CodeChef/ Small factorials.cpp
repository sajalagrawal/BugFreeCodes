//https://www.codechef.com/problems/FCTRL2
//Author - Sajal Agrawal
//@sajalagrawal

//for reference: http://www.geeksforgeeks.org/factorial-large-number/#

#include <iostream>
#define MAX 200
using namespace std;
void fact(int);
int multiply(int,int,int[]);
int main()
{
    int t;
    cin>>t;
    int a[t],i=0;
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    for(int i=0;i<t;i++){
        fact(a[i]);
        cout<<"\n";
    }
    return 0;
}

void fact(int n){
   int res[MAX];
   res[0]=1;
   int res_size=1;

   for(int x=2;x<=n;x++){
        res_size=multiply(x,res_size,res);
   }

   for(int i=res_size-1;i>=0;i--){
    cout<<res[i];
   }
}

int multiply(int x,int res_size,int res[]){
    int carry=0; //initially
    for(int i=0;i<=res_size-1;i++){
        int prod=res[i]*x+carry;
        res[i]=prod%10;
        carry=prod/10;
    }

    while(carry){
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    return res_size;
}

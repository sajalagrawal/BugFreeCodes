//https://www.codechef.com/problems/RESCALC
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
 
using namespace std;
 
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        int c[n],scores[n];
        for(i=0;i<n;i++) scores[i]=0;
        int type[n][100];
        for(i=0;i<n;i++){
            for(j=0;j<100;j++){
                type[i][j]=0;
            }
        }
        for(i=0;i<n;i++){
            cin>>c[i];
            scores[i]+=c[i];
            for(j=0;j<c[i];j++){
                cin>>type[i][j];
            }
        }
 
        for(i=0;i<n;i++){
            int one=0,two=0,three=0,four=0,five=0,six=0,count=0;
            for(j=0;j<100;j++){
                if(type[i][j]!=0){
                    if(type[i][j]==1) one++;
                    else if(type[i][j]==2) two++;
                    else if(type[i][j]==3) three++;
                    else if(type[i][j]==4) four++;
                    else if(type[i][j]==5) five++;
                    else if(type[i][j]==6) six++;
 
                }
            }
            /*if(one!=0) count++;
            if(two!=0) count++;
            if(three!=0) count++;
            if(four!=0) count++;
            if(five!=0) count++;
            if(six!=0) count++;
 
            if(count==4){
                scores[i]+=1;
            }else if(count==5){
                scores[i]+=2;
            }else if(count==6){
                scores[i]+=4;
            }*/
            while(one>0 || two>0 || three>0 || four>0 || five>0 || six>0){
                if(one>0){
                    count++;
                    one--;
                }
                if(two>0){
                    count++;
                    two--;
                }
                if(three>0){
                    count++;
                    three--;
                }
                if(four>0){
                    count++;
                    four--;
                }
                if(five>0){
                    count++;
                    five--;
                }
                if(six>0){
                    count++;
                    six--;
                }
                if(count==4){
                    scores[i]+=1;
                }else if(count==5){
                    scores[i]+=2;
                }else if(count==6){
                    scores[i]+=4;
                }
                count=0;
            }
        }
        
        /*for(i=0;i<n;i++){
            cout<<scores[i]<<" ";
        }*/
        
        //finding winner from scores
        int max=scores[0],flag=1,index=0;
        for(i=1;i<n;i++){
            if(scores[i]==max){
                flag=0;
            }else if(scores[i]>max){
                max=scores[i];
                index=i;
                flag=1;
            }
        }
        if(flag==0){
            cout<<"tie\n";
        }else if(index==0){
            cout<<"chef\n";
        }else{
            cout<<index+1<<"\n";
        }
    }
    return 0;
}
 

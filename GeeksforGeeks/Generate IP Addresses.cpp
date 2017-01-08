//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700292
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

string gen(int a,int b,int c,int d)
{
    return to_string(a)+"."+to_string(b)+"."+to_string(c)+"."+to_string(d);
}

//IP address can consist of 0 to 255 only 
bool ok(int a,int b,int c,int d)
{
    return a<=255 and b<=255 and c<=255 and d<=255;
}
/*You are required to complete this method*/
vector<string> genIp(string s)
{
    //cout<<"here";
    vector<string> vec;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            for(int k=1;k<=3;k++){
                for(int l=1;l<=3;l++){
                    if((i+j+k+l)==s.size()){
                        //string str=s.substr(0,i)+"."+s.substr(i,j)+"."+s.substr(i+j,k)+"."+s.substr(i+j+k,l);
                        int a = stoi(s.substr(0,i));
                        int b = stoi(s.substr(i,j));
                        int c = stoi(s.substr(i+j,k));
                        int d = stoi(s.substr(i+j+k,l));
                        string str =gen(a,b,c,d);
                        if(ok(a,b,c,d)) {
                               string str =gen(a,b,c,d);
                               //cout<<"str="<<str<<"\n";
                                if(str.length()==s.length()+3)
                                {
                                    vec.push_back(str);
                                }
                            }
                            
                            
                    }
                }
            }
        }
    }
    return vec;
}

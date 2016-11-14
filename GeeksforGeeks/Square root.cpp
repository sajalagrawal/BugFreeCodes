//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700226
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/*You are required to complete
this function*/
long long int floorSqrt(long long int x) 
{
    if(x==0 || x==1)return x;
    int start=1,end=x,ans,mid;
    while(start<=end){
        mid=(start+end)/2;
        
        if(mid*mid==x)return mid;
        else if(mid*mid>x)end=mid-1;
        else{
            start=mid+1;
            ans=mid;
        }
    }
    return ans;
}

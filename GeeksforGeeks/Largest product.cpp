//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700283
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/*You are required to complete the function*/
long long findMaxProduct(int a[], int n, int k)
{
    long long int maxP=1,i;
    for(i=0;i<k;i++)
        maxP=maxP*a[i];
    long long int prev=maxP;
    for(i=1;i<=n-k;i++){
        long long int cur=(prev/a[i-1])*a[i+k-1];
        maxP=max(maxP,cur);
        prev=cur;
    }
    return maxP;
}


//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700373
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

/*You are requried to complete this method */
int max_Books(int a[], int n, int k)
{
    // Your code here
    int sum=0,res=0;
    for(int i=0;i<n;i++){
        sum=0;
        while(i<n and a[i]<=k){
            sum+=a[i];
            i++;
        }
        res=max(res,sum);
    }
    return res;
}

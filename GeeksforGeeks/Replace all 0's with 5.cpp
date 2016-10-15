//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700269
//Author- Sajal Agrawal
//Username:sajalagrawal

/*you are required to complete this method*/
int convertFive(int n)
{
    int rev=0,k;
    while(n!=0){
        k=n%10;
        if(k==0)k=5;
        rev=(rev*10)+k;
        n=n/10;
    }
    n=rev;
    rev=0;
    while(n!=0){
        k=n%10;
        rev=(rev*10)+k;
        n/=10;
    }
    return rev;
}

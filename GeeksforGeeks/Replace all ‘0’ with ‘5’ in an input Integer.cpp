//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700266
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

/*you are required to complete this method*/
int convertFive(int n)
{
    //Your code here
    int rev=0,k;
    while(n){
        k=n%10;
        if(k==0)k=5;
        rev=rev*10+k;
        n/=10;
    }
    n=0;
    while(rev){
        n=n*10+rev%10;
        rev/=10;
    }
    return n;
}

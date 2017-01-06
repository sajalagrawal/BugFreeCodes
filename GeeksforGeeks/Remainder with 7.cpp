//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700377
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

//http://www.geeksforgeeks.org/remainder-7-large-numbers/

/*You are required to complete this method */
int remainderWith7(string n)
{
    int num=0,i,index=0;
    int series[]={1,3,2,6,4,5};
    for(i=n.size()-1;i>=0;i--){
        num+=(n[i]-'0')*series[index];
        index++;
        index=index%6;
        num=num%7;
    }
    return num;
}

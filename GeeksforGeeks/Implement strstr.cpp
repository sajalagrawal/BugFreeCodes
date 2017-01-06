//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700320
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
     int len=x.size();
     for(int i=0;i<=s.size()-len;i++){
         if(s.substr(i,x.size())==x)return i;
     }
     return -1;
}

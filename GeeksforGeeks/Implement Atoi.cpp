//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700386
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/*You are required to complete this method */
int atoi(string str)
{
    int i=0,res=0,flag=0;
    if(str[0]=='-'){
        flag=1;
        i++;
    }
    while(str[i]!='\0'){
        if(str[i]<'0' || str[i]>'9')return -1;
        res=res*10+str[i]-'0';
        i++;
    }
    if(flag==0)return res;
    return -res;
}

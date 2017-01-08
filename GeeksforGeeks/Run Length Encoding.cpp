//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700243
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/*You are required to complete this function */

char *encode(char *src)
{     
    int len=strlen(src);
    char ar[100];
    char *res=(char*)malloc(sizeof(char)*(2*len+1));
    int j=0,count;
    for(int i=0;i<len;i++){
        res[j++]=src[i];
        count=1;
        while(i<len-1 && src[i]==src[i+1]){
            count++;
            i++;
        }
        sprintf(ar,"%d",count);
        for(int k=0;ar[k]!='\0';k++){
            res[j++]=ar[k];
        }
        /*int rev=0;
        while(count){
            rev=rev*10+count%10;
            count/=10;
        }
        while(rev){
            res[j++]=rev%10+'0';
            rev/=10;
        }*/
        //res[j++]=count+'0';
    }
    res[j]='\0';
    return res;
}     

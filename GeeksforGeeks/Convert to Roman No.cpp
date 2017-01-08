//http://www.practice.geeksforgeeks.org/problem-page.php?pid=700317
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

/*you are required to complete 
this function*/
void convertToRoman(int n) 
{
    char ans[1000];
    int i=0,k;
    if(n>=1000){
        k=n/1000;
        while(k--)ans[i++]='M';
        n=n%1000;
    }
    if(n>=900 && n<1000){
        ans[i++]='C';
        ans[i++]='M';
        n=n%900;
    }
    if(n>=500 && n<900){
        ans[i++]='D';
        n=n%500;
    }
    if(n>=400 && n<500){
        ans[i++]='C';
        ans[i++]='D';
        n=n%400;
    }
    if(n>=100 && n<400){
        int k=n/100;
        while(k--)ans[i++]='C';
        n=n%100;
    }
    if(n>=90 && n<100){
        ans[i++]='X';
        ans[i++]='C';
        n=n%90;
    }
    if(n>=50 && n<90){
        ans[i++]='L';
        n=n%50;
    }
    if(n>=40 && n<50){
        ans[i++]='X';
        ans[i++]='L';
        n=n%40;
    }
    if(n>=10 && n<40){
        int k=n/10;
        while(k--)ans[i++]='X';
        n=n%10;
    }
    if(n>=9 && n<10){
        ans[i++]='I';
        ans[i++]='X';
        n=n%9;
    }
    if(n>=5 && n<9){
        ans[i++]='V';
        n=n%5;
    }
    if(n>=4 && n<5){
        ans[i++]='I';
        ans[i++]='V';
        n=n%4;
    }
    if(n<=3){
        while(n--)ans[i++]='I';
    }
    ans[i]='\0';
    cout<<ans;
}

/*
I=1 IV=4 V=5 IX=9 X=10 XL=40 L=50
XC=90 C=100 CD=400 D=500 CM=900 M=1000
*/
//MMMCMXCIX

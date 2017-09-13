//https://www.hackerrank.com/contests/projecteuler/challenges/euler016
import java.io.*;
import java.math.*;
import java.util.*;

public class Solution {
    public static int sumOfDigits(BigInteger num){
        int res=0,i=0;
        String digits=num.toString();
        for(;i<digits.length();i++){
            res+=(digits.charAt(i)-'0');
        }
        return res;
    }
    public static void main(String[] args) {
        int t,n;
        Scanner sc=new Scanner(System.in);
        t=sc.nextInt();
        while(t-->0){
            n=sc.nextInt();
            BigInteger num=new BigInteger("2");
            num=num.pow(n);
            System.out.println(sumOfDigits(num));
        }
    }
}
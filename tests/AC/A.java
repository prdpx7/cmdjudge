import java.lang.*;
import java.io.*;
import java.util.*;
class A{
    public static void main(String []args){
        Scanner scan = new Scanner(System.in);
        int testcase=scan.nextInt();
        for(int i=0;i<testcase;++i){
            long num = scan.nextInt();
            long x = (int)(Math.log((double)num)/Math.log(2.0));
            System.out.println((long)Math.pow(2.0,(double)x));
        }
    }
}


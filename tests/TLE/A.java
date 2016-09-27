import java.lang.*;
import java.io.*;
import java.util.*;
class A{
    public static void main(String []args){
        Scanner scan = new Scanner(System.in);
        int testcase=scan.nextInt();
        for(int i=0;i<testcase;++i){
            long num = scan.nextInt();
            long j = 1;
            while( j <= num){
                j *= 2;
                j /= 2;
            }
            System.out.println(j/2);
        }
    }
}


/*
 * https://www.hackerrank.com/challenges/java-string-reverse/problem
 */

import java.io.*;
import java.util.*;

public class J0014 {

    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        String A=sc.next();
       String r = new StringBuilder(A).reverse().toString();
       if(A.equals(r))
       System.out.println("Yes");
       else
       System.out.println("No");
    }
}





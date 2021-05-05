/*https://www.hackerrank.com/challenges/java-if-else/problem*/
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class J003 {



    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        String ans;
        int N = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        scanner.close();
      if(N%2==1 || (N>=6 && N <= 20))
      {
      ans = "Weird";
       }
     else{
       ans = "Not Weird";
         }
System.out.println(ans);

    }
}

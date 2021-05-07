/*https://www.hackerrank.com/challenges/java-loops-i/problem*/

import java.util.*;
public class J007 {



    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int N = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        int result;
        scanner.close();
        for(int i=1;i<=10;i=i+1)
        {
            System.out.printf("%d x %d = %d\n",N,i,N*i);
        }
    }
}

/*https://www.hackerrank.com/challenges/java-end-of-file/problem*/

import java.util.*;

public class J0007 {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        for(int i=1;s.hasNext()==true;i++)
        {
           System.out.println(i+" "+s.nextLine());
        }
    }
}

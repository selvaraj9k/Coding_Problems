/*
 * https://www.hackerrank.com/challenges/java-currency-formatter/problem
 */

import java.util.*;
import java.text.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();

        NumberFormat s1 = NumberFormat.getCurrencyInstance(Locale.US);
        NumberFormat s2 = NumberFormat.getCurrencyInstance(new Locale("EN","IN"));
        NumberFormat s3 = NumberFormat.getCurrencyInstance(Locale.CHINA);
        NumberFormat s4 = NumberFormat.getCurrencyInstance(Locale.FRANCE);

        String us = s1.format(payment);
        String india = s2.format(payment);
        String china = s3.format(payment);
        String france = s4.format(payment);

        System.out.println("US: " + us);
        System.out.println("India: " + india);
        System.out.println("China: " + china);
        System.out.println("France: " + france);
    }
}


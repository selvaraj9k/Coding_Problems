/*
 * https://www.hackerrank.com/challenges/30-recursion/problem
 */

#include<iostream>
int factorial(int n) {
    if(n==1)
    return n;
    else
   return n*factorial(n-1);
}
int main() {
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}


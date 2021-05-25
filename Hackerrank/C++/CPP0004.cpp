/*
 * https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem*/
#include <bits/stdc++.h>
#include<string.h>
using namespace std;



int main()
{
    int n;
    cin >> n;
    string word[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n<=9)
        cout <<word[n];
        else
        cout <<"Greater than 9";
    return 0;
}


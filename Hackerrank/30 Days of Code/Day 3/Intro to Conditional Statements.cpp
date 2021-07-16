/*
 * https://www.hackerrank.com/challenges/30-conditional-statements/problem
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   if(n%2==1||(n>=6&&n<=20))
       cout<<"Weird";
       else
       cout<<"Not Weird";
    return 0;
}

/*
 * https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
 */
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    int s,r;
    int i;
    string num[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cin >>s>>r;
    for(i=s;i<=r;i++)
    {
        if(i<=9)
        {
        cout <<num[i]<<endl;
        }
        else 
        {if(i%2==0)
            cout <<"even\n";
            else 
          cout <<"odd\n";     
        }
        
    }
    return 0;
}


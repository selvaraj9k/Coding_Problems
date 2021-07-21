/*
 * https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    string name;
    long number;
    cin >>n;
    cin.ignore();
    map <string,long> pbook;
    for(int i=0;i<n;i++)
    {
        cin >>name;
        cin >>number;
        pbook[name] = number;
    }
    while(cin>>name)
    {
        if(pbook.find(name)!=pbook.end())
        {
            cout <<name<<"="<<pbook.find(name)->second<<endl;
        }
        else {
        cout <<"Not found"<<endl;
        }
    }

    return 0;
}

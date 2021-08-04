/*
 https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem
 */
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
 {
	vector<int> par;
    char ch;
    int tmp;
    stringstream ss(str);
    while (ss >> tmp) {
        par.push_back(tmp);
        ss >> ch;
    }

    return par;
 }

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

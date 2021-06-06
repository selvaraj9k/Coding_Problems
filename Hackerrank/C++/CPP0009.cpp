/*
 * https://www.hackerrank.com/challenges/c-tutorial-strings/problem
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
	string word1,word2;
    char temp;
    cin >>word1;
    cin >>word2;
    cout<< word1.size()<<" "<<word2.size()<<endl;
    cout<< word1+word2<<endl;
    temp=word1[0];
    word1[0]=word2[0];
    word2[0]=temp;
    cout<<word1<<" "<<word2<<endl;
    return 0;
}


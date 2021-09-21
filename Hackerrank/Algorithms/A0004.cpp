/*
 https://www.hackerrank.com/challenges/compare-the-triplets/problem
 */

#include<iostream>
using namespace std;
int main()
{
    int n=3,alice=0,bob=0;
    int arr1[3],arr2[3];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr1[i]>arr2[i])
        alice+=1;
        else if (arr1[i]<arr2[i])
        bob+=1;
    }

    cout << alice << " " <<bob;
}

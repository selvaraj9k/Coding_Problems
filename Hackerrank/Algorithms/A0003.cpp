/*
 * https://www.hackerrank.com/challenges/a-very-big-sum/problem
 */
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
        cout<<fixed<<setprecision(0)<<sum;
        return 0;

}

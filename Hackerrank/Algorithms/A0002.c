/*
 * https://www.hackerrank.com/challenges/simple-array-sum/problem
 */

int simpleArraySum(int ar_count, int* ar) {
    int sum=0;
    int i=0;
    for(i=0;i<ar_count;i++)
    {
        sum=sum+ar[i];
    }
    return sum;


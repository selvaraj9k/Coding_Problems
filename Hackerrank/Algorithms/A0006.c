/*
 * https://www.hackerrank.com/challenges/birthday-cake-candles/problem
 */
#include<stdio.h>
int birthdayCakeCandles(int n,int *array)
{
    int max = array[0];
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(array[i] > max)
            max = array[i];
    }
    for(int i=0; i<n; i++)
    {
        if (array[i] == max)
            count++;
    }
      return count;
    
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int s= birthdayCakeCandles(n,arr);
    printf("%d",s);
    return 0;
}

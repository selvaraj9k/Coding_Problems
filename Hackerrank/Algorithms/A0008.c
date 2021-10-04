/*
 * https://www.hackerrank.com/challenges/mini-max-sum/problem
 */

#include<stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    long int max=n,min=n,sum=n;
    for (i=1;i<5;i++)
     {
        scanf("%d",&n);
        sum+=n;
        if (n<min)
           min=n;
        else if (n>max)
            max=n;
      }
    printf("%ld %ld",(sum-max),(sum-min));
    return 0;
}

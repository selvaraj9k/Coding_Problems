//https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0,i;
    scanf("%d", &n);
    while(n!=0)
    {
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}

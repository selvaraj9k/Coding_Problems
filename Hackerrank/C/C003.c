//https://www.hackerrank.com/challenges/sum-numbers-c/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,b;
    float s,r;
    int int_sum,int_difference;
    float float_sum,float_difference;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&s,&r);
    int_sum=a+b;
    int_difference=a-b;
    float_sum=s+r;
    float_difference=s-r;
    printf("%d\t%d\n%.1f\t%.1f",int_sum,int_difference,float_sum,float_difference);
    return 0;
}

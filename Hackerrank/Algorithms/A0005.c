/*
 * https://www.hackerrank.com/challenges/time-conversion/problem
 */
#include<stdio.h>
#include<string.h>
int main() {
    int hh, mm, ss ;
    char m[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, m) ;

    if (strcmp(m,"PM")==0 && hh!=12)
    {
         hh += 12 ;
    }
    if (strcmp(m,"AM")==0 && hh==12)
    {
        hh = 0 ;
    }

    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;
}

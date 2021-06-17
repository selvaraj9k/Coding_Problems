/*
 * https://www.hackerrank.com/challenges/frequency-of-digits-1/problem
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char s[1000],i,r;
    int j,length;
    scanf("%s",s);
    length = strlen(s);
    for(i=48;i<58;i++)
    {
        r=0;
        for(j=0;j<length;j++)
        {
            if(s[j]==i)
            {
               r++;
            }
        }
        printf("%d\t",r);
    }
    return 0;
}


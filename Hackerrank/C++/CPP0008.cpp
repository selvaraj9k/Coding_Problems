/*
 * https://www.hackerrank.com/challenges/arrays-introduction/problem
 */

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
      int n,*s,i;
      scanf("%d",&n);
      s=(int*)malloc(n*sizeof(int));
      for(i=0;i<=n;i++)
      {
          scanf("%d",(s+i));
      }
      for(i=n-1;i>=0;i--)
      {
          printf("%d\t",*(s+i));
      }
    return 0;
}

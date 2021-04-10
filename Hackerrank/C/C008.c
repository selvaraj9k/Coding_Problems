/*https://www.hackerrank.com/challenges/conditional-statements-in-c/problem*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(1<=n&&n<=9)
    {
        if(n==1){
        printf("one");}
        else if(n==2){
        printf("two");}
        else if(n==3){
        printf("three");}
        else if(n==4){
        printf("four");}
        else if(n==5){
        printf("five");}
        else if(n==6){
        printf("six");}
        else if(n==7){
        printf("seven");}
        else if(n==8){
        printf("eight");}
        else if(n==9){
        printf("nine");}
    }
    else if (n>9) {
    printf("Greater than 9");
    }

 return 0;
}
/*
#include<stdio.h>
#include<string.h>
char *number(int n)
{
    char *str[]={"one","two","three","four","five","six","seven","eight","nine"};
     if(n<=9)
    return str[n-1];
    else
    return "Greater than 9";
}
int n;
int main()
{
scanf("%d",&n);
printf("%s",number(n);
return 0;
}
*/

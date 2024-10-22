#include<stdio.h>
#include<conio.h>
int main()
{
    int n,fact=1;
    clrscr();
    printf("enter the value of n: ");
    scanf("%d", &n);
    while(n>=0){
               fact=fact*n;
               n=n-1;}
    printf("the factorial of n is :%d",fact);
    getch();
    return 0;
}             
    

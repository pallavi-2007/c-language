#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum=0;
	clrscr();
	printf("enter the number n: ");
	scanf("%d, &n");
	while(n>=0){
	    sum=sum+n;
	    n=n-1;}
	printf("the sum of the number is:%d",sum);
	getch();
	return 0;
}

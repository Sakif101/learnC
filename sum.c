// 1. Write a C program to enter two numbers and ﬁnd their sum.
#include<stdio.h>
int sum(int a, int b)
{
	int c;
	c = a + b;
	return c;
}
int main()
{
    int num[10], total;
    printf("Enter two numbers: ");
    scanf("%d %d", &num[1] , &num[2]);
    //Calling the function
    total = sum(num[1], num[2]);
    printf("Sum of the entered numbers: %d", total);
    return 0;
}


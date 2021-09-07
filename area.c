//Write a C program to enter length and breadth of a rectangle and ﬁnd its area.
#include <stdio.h>
#include <stdlib.h>
int area(length, breadth)
{
    int area;
    area = length * breadth;
    return area;

}

int main ()
{   int num [10], unit;
    printf("Please Enter length and breadth : \n");
    scanf("%d %d", &num[1] , &num[2]);
    //Calling the function
    unit = area(num[1], num[2]);
    printf("Area is: %d", unit);
    return 0;
}

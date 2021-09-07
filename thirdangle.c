//Write a C program to enter two angles of a triangle and ﬁnd the third angle.
#include<stdio.h>
int thirdAngle (int a, int b)
{
    int c=180-(a+b);
    return c;
}
int main()
{
    int first_angle, second_angle, result;
    printf("Please Enter Size of First & Second Angle: \n");
    scanf("%d %d", &first_angle, &second_angle);
    result= thirdAngle (first_angle, second_angle);
    printf("The Third Angle's Size is: %d", result);
return 0;
}

//write a program to enter any number and calculate its squire root.
#include <math.h>
#include <stdio.h>
float result (float a)
{
float b=sqrt(a);
return b;
}
int main()
{
float numberl, root;
printf("Enter any number of find square root: ");
scanf("%f", &numberl);
root=result (numberl);
printf("Square root is %.2f", root);
return 0;
}

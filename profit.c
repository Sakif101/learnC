//Write a C program to print the proﬁt from given sell and buying price.
#include <stdio.h>

int profit(sellingPrice, buyingPrice)
{
    int profit;
    profit = sellingPrice-buyingPrice;
    return profit;

}

int main ()
{   int num [10], total;
    printf("Please Enter selling price and buying price : \n");
    scanf("%d %d", &num[1] , &num[2]);
    //Calling the function
    total = profit(num[1], num[2]);
    printf("Profit is: %d", total);
    return 0;
}

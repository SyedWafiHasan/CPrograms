//Created by SWH
#include<stdio.h>
int main()
{
    struct book
    {
        int pages;
        char name[25];
        float price;
    }   b;
    printf("\nEnter details of the book.");
    printf("\nEnter the name of the book.\n");
    scanf("%s", &b.name);
    printf("\nEnter the price of the book\n");
    scanf("%f", &b.price);
    printf("\nEnter the number of pages of the book.\n");
    scanf("%d", &b.pages);
    printf("\nThe details of the book are :\nName : %s\nPrice : %f\nPages : %d", b.name, b.price, b.pages);
    return 0;
}
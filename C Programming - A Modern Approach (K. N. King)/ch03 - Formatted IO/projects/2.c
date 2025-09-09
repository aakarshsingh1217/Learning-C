#include <stdio.h>

int main(int argc, char *argv[])
{
    int item_num, dd, mm, yy;
    double unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%lf", &unit_price);
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yy);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$ %.2lf\t\t%d/%d/%d", 
        item_num, 
        unit_price,
        dd,
        mm,
        yy
    );

    return 0;
}

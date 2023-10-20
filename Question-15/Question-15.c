// Write a program to read from user the values for 3 products (item_no, quantity, price). Find the total bill value and display. Also, allow a discount of 10% on the total bill and display net bill value.

#include<stdio.h>

int main(){

    int item_1, item_2, item_3, quantity_1, quantity_2, quantity_3, price_1, price_2, price_3, t1, t2, t3, net_total_value, option;
    
    float discount_value, total_bill_value;

    printf("Enter the Item Number:\t");
    scanf("%d",&item_1);
    printf("Enter the Item Quantity:\t");
    scanf("%d",&quantity_1);
    printf("Enter the Item Price:\t");
    scanf("%d",&price_1);

    printf("Enter the Item Number:\t");
    scanf("%d",&item_2);
    printf("Enter the Item Quantity:\t");
    scanf("%d",&quantity_2);
    printf("Enter the Item Price:\t");
    scanf("%d",&price_2);

    printf("Enter the Item Number:\t");
    scanf("%d",&item_3);
    printf("Enter the Item Quantity:\t");
    scanf("%d",&quantity_3);
    printf("Enter the Item Price:\t");
    scanf("%d",&price_3);

    t1 = quantity_1 * price_1;
    t2 = quantity_2 * price_2;
    t3 = quantity_3 * price_3;
    
    net_total_value = t1 + t2 + t3;

    discount_value = 0.1 * net_total_value;

    total_bill_value = net_total_value - discount_value;
    
    printf("Net Bill Amount After discount is: %f",total_bill_value);

    // printf("If you want to generate the bill\nPress 1 for bill\nPress0 for exit\n\n");

        printf("\n\nBill\n");
        printf("------------------------------------------\n");
        printf("Item No.  Quantity   Price\n\n");
        printf("------------------------------------------\n");
        printf("%8.1f %8.1f %8.1f\n\n",item_1,quantity_1,price_1);
        printf("%8.1f %8.1f %8.1f\n\n",item_2,quantity_2,price_2);
        printf("%8.1f %8.1f %8.1f\n\n",item_3,quantity_3,price_3);
        printf("-------------------------------------------\n");
        printf("Total Price: %d\n\n",net_total_value);
        printf("Discount 10 percent: %f\n\n",discount_value);
        printf("Total Payable Price: %f\n\n",total_bill_value);

    // scanf("%d",option);

    // if(option == 1){

    //     printf("Bill\n");
    //     printf("Item No.\tQuantity\t\tPrice");
    //     printf("%d\t%d\t%d\n\n",item_1,quantity_1,price_1);
    //     printf("%d\t%d\t%d\n\n",item_2,quantity_2,price_2);
    //     printf("%d\t%d\t%d\n\n",item_3,quantity_3,price_3);
    //     printf("Total Price: %d\n\n",net_total_value);
    //     printf("Discount 10 percent: %d\n\n",DISCOUNT);
    //     printf("Total Payable Price: %f\n\n",total_bill_value);

    // }

    // else{

    //     printf("Thanks for shopping with us!!!");

    // }


    return 0;

}
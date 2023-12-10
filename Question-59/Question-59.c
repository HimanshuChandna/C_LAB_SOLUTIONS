// Program to define a structure stores and write a function update() to change the values of its members. (Pass structure to update() and return structure.)

#include <stdio.h>

// Define a structure for store details
struct Store {
    char itemName[100];
    int quantity;
    float price;
};

// Function to update store details
struct Store update(struct Store store) {
    // Input new values for store members
    printf("Enter updated details for the store:\n");
    printf("New Item Name: ");
    scanf("%s", store.itemName);
    printf("New Quantity: ");
    scanf("%d", &store.quantity);
    printf("New Price: ");
    scanf("%f", &store.price);

    // Return the updated structure
    return store;
}

int main() {
    // Declare a variable of type Store
    struct Store myStore;

    // Display details
    printf("Name-Himanshu Chandna, Class-1B\n\n");
    printf("Program to define a structure store and write a function update() to change its values.\n\n");

    // Input initial store details
    printf("Enter initial details for the store:\n");
    printf("Item Name: ");
    scanf("%s", myStore.itemName);
    printf("Quantity: ");
    scanf("%d", &myStore.quantity);
    printf("Price: ");
    scanf("%f", &myStore.price);

    // Call the update function to change values
    myStore = update(myStore);

    // Display updated store details
    printf("\nUpdated store details:\n");
    printf("Item Name: %s\n", myStore.itemName);
    printf("Quantity: %d\n", myStore.quantity);
    printf("Price: %.2f\n", myStore.price);

    printf("\n\n<--- End of Code --->");

    return 0;
}

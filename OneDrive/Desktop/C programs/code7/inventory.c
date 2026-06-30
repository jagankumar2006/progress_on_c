#include <stdio.h>
#include <string.h>

#define MAX 100

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

struct Product inventory[MAX];
int count = 0;

// Load Data from File
void loadData() {
    FILE *fp = fopen("inventory.dat", "rb");

    if (fp == NULL) {
        return;
    }

    fread(&count, sizeof(int), 1, fp);
    fread(inventory, sizeof(struct Product), count, fp);

    fclose(fp);
}

// Save Data to File
void saveData() {
    FILE *fp = fopen("inventory.dat", "wb");

    if (fp == NULL) {
        printf("Error saving file!\n");
        return;
    }

    fwrite(&count, sizeof(int), 1, fp);
    fwrite(inventory, sizeof(struct Product), count, fp);

    fclose(fp);
}

// Add Product
void addProduct() {
    if (count >= MAX) {
        printf("\nInventory Full!\n");
        return;
    }

    printf("\nEnter Product ID: ");
    scanf("%d", &inventory[count].id);

    // Check Duplicate ID
    for (int i = 0; i < count; i++) {
        if (inventory[i].id == inventory[count].id) {
            printf("Product ID already exists!\n");
            return;
        }
    }

    printf("Enter Product Name: ");
    scanf(" %[^\n]", inventory[count].name);

    printf("Enter Quantity: ");
    scanf("%d", &inventory[count].quantity);

    printf("Enter Price: ");
    scanf("%f", &inventory[count].price);

    count++;

    saveData();

    printf("\nProduct Added Successfully!\n");
}

// Display Products
void displayProducts() {
    if (count == 0) {
        printf("\nNo Products Available!\n");
        return;
    }

    printf("\n=================================================================\n");
    printf("%-10s %-25s %-10s %-10s\n", "ID", "NAME", "QTY", "PRICE");
    printf("=================================================================\n");

    for (int i = 0; i < count; i++) {
        printf("%-10d %-25s %-10d %.2f\n",
               inventory[i].id,
               inventory[i].name,
               inventory[i].quantity,
               inventory[i].price);
    }
}

// Search Product
void searchProduct() {
    int id, found = 0;

    printf("\nEnter Product ID to Search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (inventory[i].id == id) {
            printf("\nProduct Found!\n");
            printf("ID       : %d\n", inventory[i].id);
            printf("Name     : %s\n", inventory[i].name);
            printf("Quantity : %d\n", inventory[i].quantity);
            printf("Price    : %.2f\n", inventory[i].price);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nProduct Not Found!\n");
}

// Update Stock
void updateStock() {
    int id, found = 0;

    printf("\nEnter Product ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (inventory[i].id == id) {
            printf("Current Quantity: %d\n", inventory[i].quantity);

            printf("Enter New Quantity: ");
            scanf("%d", &inventory[i].quantity);

            saveData();

            printf("\nStock Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nProduct Not Found!\n");
}

// Delete Product
void deleteProduct() {
    int id, found = 0;

    printf("\nEnter Product ID to Delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (inventory[i].id == id) {

            for (int j = i; j < count - 1; j++) {
                inventory[j] = inventory[j + 1];
            }

            count--;

            saveData();

            printf("\nProduct Deleted Successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nProduct Not Found!\n");
}

// Inventory Report
void inventoryReport() {
    float totalValue = 0;
    int lowStockFound = 0;

    printf("\n================ INVENTORY REPORT ================\n");

    for (int i = 0; i < count; i++) {
        totalValue += inventory[i].quantity * inventory[i].price;
    }

    printf("Total Products  : %d\n", count);
    printf("Inventory Value : %.2f\n", totalValue);

    printf("\nLow Stock Products (Quantity < 10)\n");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        if (inventory[i].quantity < 10) {
            printf("ID: %d | %s | Qty: %d\n",
                   inventory[i].id,
                   inventory[i].name,
                   inventory[i].quantity);
            lowStockFound = 1;
        }
    }

    if (!lowStockFound)
        printf("No Low Stock Products.\n");
}

int main() {
    int choice;

    loadData();

    do {
        printf("\n");
        printf("=================================================\n");
        printf("      ENTERPRISE INVENTORY MANAGEMENT SYSTEM\n");
        printf("=================================================\n");
        printf("1. Add Product\n");
        printf("2. View Products\n");
        printf("3. Search Product\n");
        printf("4. Update Stock\n");
        printf("5. Delete Product\n");
        printf("6. Inventory Report\n");
        printf("7. Exit\n");
        printf("=================================================\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                updateStock();
                break;

            case 5:
                deleteProduct();
                break;

            case 6:
                inventoryReport();
                break;

            case 7:
                saveData();
                printf("\nData Saved Successfully.\n");
                printf("Exiting Program...\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while (choice != 7);

    return 0;
}
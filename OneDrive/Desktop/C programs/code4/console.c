#include<stdio.h>
#include<stdlib.h>
int main(){
    char confirm;
    int payment_choice;
    while(1){
    printf("Welcome to Online Shopping\n");
    printf("Choose a menu\n1. Shoes\n2. Watches\n3. Mobiles\n4. Exit\n");
    int choice,Choice_Of_Shoes,Choice_Of_Watches,Choice_Of_Mobiles;
    int quantity,Total_Cost;
    printf("Enter the choice:");
    scanf("%d",&choice);
    switch (choice){
        case 1:{
            printf("You have selected Shoes\n");
            printf("1. Nike Shoes  Price: ₹2500\n2. Adidas Shoes  Price: ₹1850\n3.  Puma Shoes Price: ₹1450\n");
            printf("Enter the choice for Shoes:");
            scanf("%d",&Choice_Of_Shoes);
            switch (Choice_Of_Shoes){
                case 1:{
                    printf("You have selected Nike Shoes\n");
                    printf("Enter the quantity:");
                    scanf("%d",&quantity);
                    Total_Cost = quantity * 2500; 
                    printf("You selected %d Nike Shoes\n",quantity);
                    printf("Total Cost: ₹%d\n",Total_Cost);
                    printf("Confirm your order (y/n):");
                    scanf(" %c",&confirm);
                    if (confirm == 'y' || confirm == 'Y'){
                        printf("Order confirmed for %d Nike Shoes\n",quantity);
                        printf("Select online payment or cash on delivery (1 for online payment, 2 for cash on delivery):");
                        scanf("%d",&payment_choice);
                        if (payment_choice == 1){
                            printf("You have selected online payment\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else if (payment_choice == 2){
                            printf("You have selected cash on delivery\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else{
                            printf("Invalid payment choice\n");
                        }
                    }
                    else{
                        printf("Order cancelled for Nike Shoes\n");
                        printf("You can choose another product or exit the program.\n");
                    }
                    break;
                }
                case 2:{
                    printf("You have selected Adidas Shoes\n");
                    printf("Enter the quantity:");
                    scanf("%d",&quantity);
                    Total_Cost = quantity * 1850;
                    printf("You selected %d Adidas Shoes\n",quantity);
                    printf("Total Cost: ₹%d\n",Total_Cost);
                    printf("Confirm your order (y/n):");
                    scanf(" %c",&confirm);
                    if (confirm == 'y' || confirm == 'Y'){
                        printf("Order confirmed for %d Adidas Shoes\n",quantity);
                        printf("Select online payment or cash on delivery (1 for online payment, 2 for cash on delivery):");
                        scanf("%d",&payment_choice);
                        if (payment_choice == 1){
                            printf("You have selected online payment\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else if (payment_choice == 2){
                            printf("You have selected cash on delivery\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else{
                            printf("Invalid payment choice\n");
                        }
                    }
                    else{
                        printf("Order cancelled for Adidas Shoes\n");
                        printf("You can choose another product or exit the program.\n");
                    }
                    break;
                }
                case 3:{
                    printf("You have selected Puma Shoes\n");
                    printf("Enter the quantity:");
                    scanf("%d",&quantity);
                    printf("you selected %d Puma Shoes\n",quantity);
                    Total_Cost= quantity * 1450;
                    printf("Total Cost: ₹%d\n",Total_Cost);
                    printf("Confirm your order (y/n):");
                    scanf(" %c",&confirm);
                    if (confirm == 'y' || confirm == 'Y'){
                        printf("Order confirmed for %d Puma Shoes\n",quantity);
                        printf("Select online payment or cash on delivery (1 for online payment, 2 for cash on delivery):");
                        scanf("%d",&payment_choice);
                        if (payment_choice == 1){
                            printf("You have selected online payment\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else if (payment_choice == 2){
                            printf("You have selected cash on delivery\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else{
                            printf("Invalid payment choice\n");
                        }
                    }
                    else{
                        printf("Order cancelled for Puma Shoes\n");
                        printf("You can choose another product or exit the program.\n");
                    }
                    break;
                }
                default:{
                    printf("Invalid choice for Shoes\n");
                    break;
                }
            }
            break;
        }
        case 2:{
            printf("You have selected Watches\n");
            printf("1. Rolex Watches  Price: ₹50001\n2. Casio Watches  Price: ₹5001\n3. Timex Watches  Price: ₹2001\n");
            printf("Enter the choice for Watches:");
            scanf("%d",&Choice_Of_Watches);
            printf("You selected %d for Watches\n",Choice_Of_Watches);
            switch (Choice_Of_Watches){
                case 1:{
                    printf("You have selected Rolex Watches\n");
                    printf("Enter the quantity:");
                    scanf("%d",&quantity);
                    Total_Cost = quantity * 50001;
                    printf("You selected %d Rolex Watches\n",quantity);
                    printf("Total Cost: ₹%d\n",Total_Cost);
                    printf("Confirm your order (y/n):");
                    scanf(" %c",&confirm);
                    if (confirm == 'y' || confirm == 'Y'){
                        printf("Order confirmed for %d Rolex Watches\n",quantity);
                        printf("Select online payment or cash on delivery (1 for online payment, 2 for cash on delivery):");
                        scanf("%d",&payment_choice);
                        if (payment_choice == 1){
                            printf("You have selected online payment\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else if (payment_choice == 2){
                            printf("You have selected cash on delivery\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else{
                            printf("Invalid payment choice\n");
                        }
                    }
                    else{
                        printf("Order cancelled for Rolex Watches\n");
                        printf("You can choose another product or exit the program.\n");
                    }
                    break;
                }
                case 2:{
                    printf("You have selected Casio Watches\n");
                    printf("Enter the quantity:");
                    scanf("%d",&quantity);
                    Total_Cost = quantity * 5001;
                    printf("You selected %d Casio Watches\n",quantity);
                    printf("Total Cost: ₹%d\n",Total_Cost);
                    printf("Confirm your order (y/n):");
                    scanf(" %c",&confirm);
                    if (confirm == 'y' || confirm == 'Y'){
                        printf("Order confirmed for %d Casio Watches\n",quantity);
                        printf("Select online payment or cash on delivery (1 for online payment, 2 for cash on delivery):");
                        scanf("%d",&payment_choice);
                        if (payment_choice == 1){
                            printf("You have selected online payment\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else if (payment_choice == 2){
                            printf("You have selected cash on delivery\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else{
                            printf("Invalid payment choice\n");
                        }
                    }
                    else{
                        printf("Order cancelled for Casio Watches\n");
                        printf("You can choose another product or exit the program.\n");
                    }
                    break;
                }
                case 3:{
                    printf("You have selected Timex Watches\n");
                    printf("Enter the quantity:");
                    scanf("%d",&quantity);
                    Total_Cost = quantity * 2001;
                    printf("You selected %d Timex Watches\n",quantity);
                    printf("Total Cost: ₹%d\n",Total_Cost);
                    printf("Confirm your order (y/n):");
                    scanf(" %c",&confirm);
                    if (confirm == 'y' || confirm == 'Y'){
                        printf("Order confirmed for %d Timex Watches\n",quantity);
                        printf("Select online payment or cash on delivery (1 for online payment, 2 for cash on delivery):");
                        scanf("%d",&payment_choice);
                        if (payment_choice == 1){
                            printf("You have selected online payment\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else if (payment_choice == 2){
                            printf("You have selected cash on delivery\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else{
                            printf("Invalid payment choice\n");
                        }
                    }
                    else{
                        printf("Order cancelled for Timex Watches\n");
                        printf("You can choose another product or exit the program.\n");
                    }
                    break;
                }
                default:{
                    printf("Invalid choice for Watches\n");
                    break;
                }
            }
            break;
        }
        case 3:{
            printf("You have selected Mobiles\n");
            printf("1. iPhone  price: ₹120000\n2. Samsung Galaxy  price: ₹90000\n3. Google Pixel  price: ₹50000\n");
            printf("Enter the choice for Mobiles:");
            scanf("%d",&Choice_Of_Mobiles); 
            switch (Choice_Of_Mobiles){
                case 1:{
                    printf("You have selected iPhone\n");
                    printf("Enter the quantity:");
                    scanf("%d",&quantity);
                    Total_Cost = quantity * 120000;
                    printf("You selected %d iPhone\n",quantity);
                    printf("Total Cost: ₹%d\n",Total_Cost);
                    printf("Confirm your order (y/n):");
                    scanf(" %c",&confirm);
                    if (confirm == 'y' || confirm == 'Y'){
                        printf("Order confirmed for %d iPhone\n",quantity);
                        printf("Select online payment or cash on delivery (1 for online payment, 2 for cash on delivery):");
                        scanf("%d",&payment_choice);
                        if (payment_choice == 1){
                            printf("You have selected online payment\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else if (payment_choice == 2){
                            printf("You have selected cash on delivery\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else{
                            printf("Invalid payment choice\n");
                        }
                    }
                    else{
                        printf("Order cancelled for iPhone\n");
                        printf("You can choose another product or exit the program.\n");
                    }
                    break;
                }
                case 2:{
                    printf("You have selected Samsung Galaxy\n");
                    printf("Enter the quantity:");
                    scanf("%d",&quantity);
                    Total_Cost = quantity * 90000;
                    printf("You selected %d Samsung Galaxy\n",quantity);
                    printf("Total Cost: ₹%d\n",Total_Cost);
                    printf("Confirm your order (y/n):");
                    scanf(" %c",&confirm);
                    if (confirm == 'y' || confirm == 'Y'){
                        printf("Order confirmed for %d Samsung Galaxy\n",quantity);
                        printf("Select online payment or cash on delivery (1 for online payment, 2 for cash on delivery):");
                        scanf("%d",&payment_choice);
                        if (payment_choice == 1){
                            printf("You have selected online payment\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else if (payment_choice == 2){
                            printf("You have selected cash on delivery\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else{
                            printf("Invalid payment choice\n");
                        }
                    }
                    else{
                        printf("Order cancelled for Samsung Galaxy\n");
                        printf("You can choose another product or exit the program.\n");
                        printf("Thankyou for shopping with us. Goodbye!\n\n\n");
                    }
                    break;
                }
                case 3:{
                    printf("You have selected Google Pixel\n");
                    printf("Enter the quantity:");
                    scanf("%d",&quantity);
                    Total_Cost = quantity * 50000;
                    printf("You selected %d Google Pixel\n",quantity);
                    printf("Total Cost: ₹%d\n",Total_Cost);
                    printf("Confirm your order (y/n):");
                    scanf(" %c",&confirm);
                    if (confirm == 'y' || confirm == 'Y'){
                        printf("Order confirmed for %d Google Pixel\n",quantity);
                        printf("Select online payment or cash on delivery (1 for online payment, 2 for cash on delivery):");
                        scanf("%d",&payment_choice);
                        if (payment_choice == 1){
                            printf("You have selected online payment\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else if (payment_choice == 2){
                            printf("You have selected cash on delivery\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                        else{
                            printf("Invalid payment choice\nThankyou for shopping with us. Goodbye!\n\n\n");
                        }
                    }
                    else{
                        printf("Order cancelled for Google Pixel\n");
                        printf("You can choose another product or exit the program.\n");
                        printf("Thankyou for shopping with us. Goodbye!\n\n\n");
                    }
                    break;
                }
                default:{
                    printf("Invalid choice for Mobiles\n");
                    break;
                }
            }
            break;
        }
        default:{
            printf("Invalid choice\n");
            break;
        }
        case 4:{
            printf("Thank you for shopping with us. Goodbye!\n\n\n");
            exit(0);
        }
    }
}
    return 0;
}
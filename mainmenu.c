#include <stdio.h>
#include "admin.h"
#include "fileoperations.h"
#include "user.h"
#include <stdbool.h>
#include "enum.h"


int mainMenu()
{
    loadAccountsFromFile();
    loadTransactionsFromFile();

    int choice;

    while (true)
    {
        printf("\n________ Wellcome to PThinkS Bank ________\n");
        printf("1. Admin Login\n");
        printf("2. User Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case ADMIN:
            if (adminLogin())
            {
                printf("Admin login Successful.\n");
                adminMenu();
            }
            else
            {
                printf("Invalid admin credentials.\n");
            }
            break;

        case USER:
            userLogin();
            break;

        case EXIT:
            printf("Thank you. Please visit again\n");
            return SUCCESS;

        default:
            printf("Invalid choice. Please try again.\n");

        }
    }
}

#include<stdio.h>

struct Account {
        char username[25];
        char password[25];
        int balance[15];
    };

int main()
{
    struct Account;    
    printf("Welcome to the bank!\nDo you have an account with us?[y,n]?\n");
    char a = getchar();
    if (a = 'y'){
        /*they have an account*/
        /*now they sign in*/
        printf("Please enter login information\nStart with username (25 characters max):\n");
        scanf("%s\n", &Account.username);
        printf("Now please enter your password:\n");
        scanf("%s\n", &Account.password);
        printf("You're all set!Press enter to proceed");
        
    }
    else
        printf("Sign up!\n");

    return 0;
}

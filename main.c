#include<stdio.h>

struct ACCOUNT{
    char username[25];
    char password[25];
    int balance[15];
};

int main()
{
    printf("Welcome to the bank!\n Do you have an account with us?[y,n]?\n");
    char a = getchar();
    if (a = y){
        /*they have an account*/
        /*now they sign in*/
        printf("Please enter login information\n");
    else
        printf("Sign up!\n");

    return 0;
}

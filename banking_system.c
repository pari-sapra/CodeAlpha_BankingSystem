#include<stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

struct Account user;
void createAccount()
{
    printf("Enter Account Number: ");
    scanf("%d", &user.accNo);

    printf("Enter Name: ");
    scanf("%s", user.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &user.balance);

    printf("\nAccount Created Successfully!\n");
}

void deposit()
{
    float amount;
    printf("Enter Amount to Deposit: ");
    scanf("%f", &amount);

    user.balance += amount;

    printf("Amount Deposited Successfully!\n");
}

void withdraw()
{
    float amount;
    printf("Enter Amount to Withdraw: ");
    scanf("%f", &amount);

    if(amount <= user.balance)
    {
        user.balance -= amount;
        printf("Withdrawal Successful!\n");
    }
    else
    {
        printf("Insufficient Balance!\n");
    }
}

void balanceEnquiry()
{
    printf("\nAccount Number: %d\n", user.accNo);
    printf("Name: %s\n", user.name);
    printf("Current Balance: %.2f\n", user.balance);
}

int main()
{
    int choice;
    createAccount();
    while(1)
    {
        printf("\n===== BANKING SYSTEM =====\n");

        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Balance Enquiry\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                deposit();
                break;

            case 2:
                withdraw();
                break;

            case 3:
                balanceEnquiry();
                break;

            case 4:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}
/* Create a structure to specify data of customers in a bank.
The data to be stored is: Account number, Name, Balance in account.
Assume maximum of 200 customers in the bank.
(a) Write a function to print the Account number and name of each customer with balance below Rs. 100.
(b) If a customer request for withdrawal or deposit, it is given in the form: Acct. no, amount, code (1 for deposit, 0 for withdrawal)
Write a program to give a message, “The balance is insufficient for the specified withdrawal". */
#include <stdio.h>
#include <string.h>

typedef struct
{
    long long int acc_num;
    char name[50];
    float balance;
} Customer;

void get_data(Customer *c)
{
    printf("\nEnter details of Customer :\n");
    printf("Account number : ");
    scanf("%lld", &c->acc_num);
    printf("Customer Name : ");
    getchar();
    fgets(c->name, sizeof(c->name), stdin);
    c->name[strcspn(c->name, "\n")] = '\0';
    printf("Balance : ");
    scanf("%f", &c->balance);
}

void low_balance(Customer arr[], int n)
{
    printf("Customers with balance below Rs. 100:\n");
    for (int i = 0; i < n; i++)
        if (arr[i].balance < 100)
            printf("Account No: %lld\nName: %s\n", arr[i].acc_num, arr[i].name);
}

void transaction(Customer arr[], int n)
{
    int found = 0;
    long long int account_number;
    float amount;
    char choice;
    printf("Enter the Account number : ");
    scanf("%lld", &account_number);
    printf("Enter the Amount : ");
    scanf("%f", &amount);
    printf("Enter the Choice(1 for deposit, 0 for withdrawal) : ");
    scanf(" %c", &choice);
    for (int i = 0; i < n; i++)
    {
        if(account_number == arr[i].acc_num)
        {
            found = 1;
            switch (choice)
            {
                case '1':
                    arr[i].balance += amount;
                    printf("The amount Rs. %.2f is deposited and the bank balance is %.2f", amount, arr[i].balance);
                    break;
                case '0':
                    if(arr[i].balance > amount)
                    {
                        arr[i].balance -= amount;
                        printf("The amount %.2f is withdrawn and the bank balance is %.2f", amount, arr[i].balance);
                    }
                    else
                        printf("Insufficient balance!");
                    break;
                default:
                    printf("Invalid Choice!");
                    break;
            }
            break;
        }
    }
    if(!found)
        printf("Account number not matched!");
}


int main()
{
    int n;
    Customer customers[200];
    printf("Enter the number of customers : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        get_data(&customers[i]);
    low_balance(customers, n);
    transaction(customers, n);
    return 0;
}
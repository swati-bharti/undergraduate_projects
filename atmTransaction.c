#include <stdio.h>
unsigned long amount = 1000, withdraw, deposit;
int choice, pin;
void main()
{
    printf("enterursecretpinnumber\n");
    scanf("%d", &pin);
    if (pin != 2016)
        printf("please enter valid pin number\n");
    else
    {
        printf("1check balance\n");
        printf("2withdraw\n");
        printf("3deposit\n");
        printf("quit\n");
        printf("enter your choice\n");
        scanf("%d", &choice);
    }
    switch (choice)
    {
    case 1:
        printf("your current balance is:%lu\n", amount);
        break;
    case 2:
        printf("entertheamounttowithdraw\n");
        scanf("%lu", withdraw);
        if (withdraw % 100 == 0)
            printf("amount should be in multiples of hundred only\n");
        else if (withdraw > (amount - 500))
        {
            printf("insufficientbalance\n");
        }
        else
        {
            amount = amount - withdraw;
            printf("yourcurrentbalanceis:%lu", amount);
        }
        break;
    case 3:
        printf("do you want to deposit\n");
        scanf("%lu", &amount);
        amount = amount + deposit;
        printf("yourcurrentbalance:%lu", amount);
        break;
    default:
        printf("invalid choice\n");
    }
    printf("\n\n\n\n\nThank You for using atm service\n");
}

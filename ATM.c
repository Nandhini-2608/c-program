#include<stdio.h>
int main(){
int choice;
float balance=1000.00,amount;
while(1){
    printf("1.balance\n");
    printf("2.deposit money\n");
    printf("3.withdraw money\n");
    printf("4.exit\n");
    printf("enter a choice:");
    scanf("%d",& choice);
    switch(choice){
    case1:
        printf("you balance is:rs%2.f/n",balance);
        break;
        case2:
            printf("enter the deposit amount:");
            scanf("%f",&amount);
            balance+= amount;
            break;
            case3:
                printf("Enter the withdraw amount:");
                scanf("%f",&amount);
                balance-=amount;
                break;
                case4:
                    printf("thank you");
                    return 0;

                    default;
                    printf("Invalid statement/n");


}

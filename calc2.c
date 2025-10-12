#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
int option;
double num1;
double num2;
printf("CALCULATION MENU\n");
printf("________________\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Power\n");
printf("6. Square Root\n");
printf("7.cube Root\n");
printf("________________\n");
printf("Choose an option (1-7): ");
scanf("%d", &option);
switch(option) {
    case 1:
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);
        printf("Answer: %lf\n", num1 + num2);
        break;
    case 2:
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);
        printf("Answer: %lf\n", num1 - num2);
        break;
    case 3:
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);
        printf("Answer: %lf\n", num1 * num2);
        break;
    case 4:
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);
        if (num2 != 0) {
            printf("Answer: %lf\n", num1 / num2);
        } 

        else {
            printf("Error:\n");
        }
        break;
    case 5:
        printf("Enter base number: ");
        scanf("%lf", &num1);
        printf("Enter the power: ");
        scanf("%lf", &num2);
        printf("Answer: %lf\n", pow(num1, num2));
        break;
    case 6:
        printf("Enter number: ");
        scanf("%lf", &num1);
        if (num1 >= 0) {
            printf("Answer: %lf\n", sqrt(num1));
            } 
        else {
            printf("Error:\n");
        }
        break;
    case 7:
        printf("Enter number: ");
        scanf("%lf", &num1);
        printf("Answer: %lf\n", cbrt(num1));
        break;
    default:
        printf("Error!\n");
    }
return 0;
}

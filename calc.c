#include <stdio.h>
int main() {
double num1;
double num2;
char sign;
printf("Enter first number: ");
scanf("%lf ",&num1);
printf("Enter an operator: ");
scanf(" %c", &sign);
printf("Enter second number: ");
scanf("%lf ",&num2);
if (sign=='+') {
    printf("%f",num1+num2);}
else if (sign=='-') {
    printf("%f",num1-num2);
}
else if (sign=='*') {
    printf("%f",num1*num2);
}
else if (sign=='/') {
    printf("%f",num1/num2);
}
else {
    printf("error");
}
return 0;
}
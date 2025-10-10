#include <stdio.h>
int main() {
char name[100];
int age;
char institutionname[100];
int phonenumber;
printf("what's your name?");
scanf("%s", name);
printf("How old are you?");
scanf("%d",&age);
printf("Enter your current institution name?");
scanf("%s", institutionname);
printf("Enter your phone number?");
scanf("%d", &phonenumber);
printf("welcome to FIO\n");
printf("The following are your details:\n");
printf("Your name is %s\n", name);
printf("You are %d years old\n", age);
printf("You currently study at %s\n", institutionname);
printf("%d is your phone number\n", phonenumber);
printf("Thank you for using our services\n");
return 0;
} 
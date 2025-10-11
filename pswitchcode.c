#include <stdio.h>
int main() {
char name[20];
char grade;
printf("Enter your name: ");
scanf("%s", name);
printf("Enter your grade: ");
scanf(" %c", &grade);
switch(grade) {
    case 'A':
        printf("You are approved\n");
        break;
    case 'B':
        printf("you are required to submit your documents\n");
        break;
    case 'C':
        printf("your recruitment is still in process\n");
        break;
    case 'D':
        printf("failed! you were involved in a scandal\n");
        break;
    case'E':
        printf("you are the best candidate\n");
        break;
    case 'F':
        printf("you are not qualified\n");
        break;
    case 'G':
        printf("you are hired\n");
        break;
    default:
        printf("apllication not found\n");
        break;}
printf("%s thanks for using our recruitment system\n", name);
printf("welcome again anytime\n");
printf("have a nice day\n");
return 0;
}
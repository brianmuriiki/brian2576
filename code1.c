#include <stdio.h>
#include <string.h>
struct employee{
	char name[100];
	char comname[100];
	int age;
	double salary;
	int id;
	char residence[100];
	char gender[100];
};
int main() {
	struct employee employee1;
	strcpy(employee1.name, "kelvin");
	strcpy(employee1.comname, "safaricom");
	employee1. age = 20;
	employee1. salary = 1700000.0;
	employee1. id = 348861982;
	strcpy(employee1.residence, "nairobi");
	strcpy(employee1.gender, "male");

	struct employee employee2;
	strcpy(employee2.name, "celesten");
	strcpy(employee2.comname, "safaricom");
	employee2. age = 21;
	employee2. salary = 700000.0;
	employee2. id = 348861882;
	strcpy(employee2.residence, "meru");
	strcpy(employee2.gender, "female");
	 
 printf("employee1 details\n");
 printf("Name:%s\n",employee1.name);
printf("Company name:%s\n",employee1.comname);
printf("Age:%d\n",employee1.age);
printf("Salary:%.2f\n",employee1.salary);
printf("ID:%d\n",employee1.id);
printf("Residence:%s\n",employee1.residence);
 
 return 0;

}

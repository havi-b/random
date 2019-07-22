#include <stdio.h>
#include <string.h>

struct empl {
	char firstname[20];
	char lastname[20];
	int age;
	int id;
};

void printempl(struct empl my_empl)
{
	printf("First Name is : %s\n", my_empl.firstname);
	printf("Last Name is : %s\n", my_empl.lastname);
	printf("Age is : %d\n", my_empl.age);
	printf("ID Number is : %d\n", my_empl.id);
}
int main()
{
	struct empl havi;

	strcpy(havi.firstname, "Hafzul");
	strcpy(havi.lastname, "Bhuiyan");
	havi.age = 24;
	havi.id = 101010;

	printempl(havi);
}
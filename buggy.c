#include <stdio.h>
#include <string.h>

/* Assignment:
1. fix bugs in the code
2. add comments
3. create a new branch on git
4. git push changed buggy.c
5. create pull request with your name and changes you made

*/

struct dog // initiate struct
{
	int age; // declare variable for age
	char name[10]; // declare variable and count for name
};


void main() // function main begins program execution
{
	struct dog thing1; // declare struct thing1
	struct dog thing2; // declare struct thing2

	thing1.age = 5; // declare age thing1
	thing2.age = 13; // declare age thing2
	
	puts("What is your dogs name? "); // prompt user for input
	gets(thing1.name); // display input 

	strcpy(thing2.name, "Buster"); // initiate strcpy

	string, printf("Name: %s\n",thing1.name ); // display name of thing1
	printf("Age: %i\n",thing1.age); // display age of thing1
	printf("Thing2 Name: %s\n",thing2.name); // display name of thing2
	printf("Thing2 Age %i\n",thing2.age); // display age of thing2

} // end function main

#include <stdio.h>
#include <string.h>

/* Assignment:
1. fix bugs in the code
2. add comments
3. create a new branch on git
4. git push changed buggy.c
5. create pull request with your name and changes you made

*/

struct dog
{
	int age;
	char name[10];	// Remove assignment operator
};


void main()
{
	struct dog thing1;	// Remove parenthesis and change colon to semicolon
	struct dog thing2;

	thing1.age = 5;		// Remove unnecessary brackets
	thing2.age = 13;
	
	puts("What is your dogs name? ");	// Change braces to parenthesis
	gets(thing1.name);								// Change 'names' to 'name'

	strcpy(thing2.name, "Buster");

	printf("Thing1 Name: %s\n",thing1.name );	// Specify thing number and change integer format tag to string
	printf("Thing1 Age: %i\n",thing1.age);		// Specify thing number and change colon to semicolon
	printf("Thing2 Name: %s\n",thing2.name);	// Add closing quotation mark
	printf("Thing2 Age: %i\n",thing2.age);		// Add colon and replace single quotation mark with double quotation mark
}
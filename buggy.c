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
	char name[10]; //removed equal sign because we are not assigning a value but the size of the character array
};


void main()
{
	struct dog thing1; //removed () from around dog and changed colon to semi-colon
	struct dog thing2;

	thing1.age = 5; //removed from value since it is int type
	thing2.age = 13;
	
	puts("What is your dogs name? "); //changed {} to ()
	gets(thing1.name); //removed the 's' from names because the variable was initiated as name (not plural)

	strcpy(thing2.name, "Buster");

	printf("Name: %s\n", thing1.name); //changed %i to %c because thing1.name is char type string not an int type
	printf("Age: %i\n", thing1.age); //changed colon to seimi-colon
	printf("Thing2 Name: %s\n", thing2.name); //added quotation(") mark after %s\n to complete pair
	printf("Thing2 Age %i\n", thing2.age); //replaced single quote(') with double quotation mark (")
}
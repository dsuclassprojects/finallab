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
	char name[10]; //changed name = [10] to name[10]
};


void main()
{
	struct dog thing1; //removed parentheses from dog and changed the colon to a semicolon
	struct dog thing2;

	thing1.age = 5; //removed bracets
	thing2.age = 13;
	
	puts("What is your dogs name? "); //replaced {} with ()
	gets(thing1.name); //removed s from name(s)

	strcpy(thing2.name, "Buster");

	printf("Name: %s\n",thing1.name ); //changed %i to %s
	printf("Age: %i\n",thing1.age); // replaced colon with semicolon
	printf("Thing2 Name: %s\n",thing2.name); //Added ""
	printf("Thing2 Age %i\n",thing2.age); //Replaced '' with ""
}
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
	char name[10];	//fixed declaration, removed "=" and space
};


void main()
{
	struct dog thing1;	//changed colon to semicolon, removed parentheses
	struct dog thing2;

	thing1.age = 5;	//removed brackets
	thing2.age = 13;
	
	puts("What is your dogs name? ");
	gets(thing1.name);	//removed "s" 

	strcpy(thing2.name, "Buster");

	printf("Name: %s\n",thing1.name);	//changed variable type from i to s, removed space
	printf("Age: %i\n",thing1.age);		//changed colon to semicolon
	printf("Thing2 Name: %s\n",thing2.name);	//Missing quotation mark
	printf("Thing2 Age %i\n",thing2.age);		//Replaced single quote with double
}
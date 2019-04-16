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
	char name[10]; //removed = sign
};


void main()
{
	struct dog thing1; //removed parentheses and replaced colon
	struct dog thing2;

	thing1.age = 5; //removed bracket
	thing2.age = 13;
	
	puts{"What is your dogs name? "};
	gets(thing1.name); removed 's' from names

	strcpy(thing2.name, "Buster");

	printf("Name: %s\n",thing1.name );//replaced 'i'
	printf("Age: %i\n",thing1.age):
	printf("Thing2 Name: %s\n",thing2.name); //closed quote
	printf("Thing2 Age %i\n",thing2.age); //closed quote
	
	return 0;
}

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
	char name[10];  //changed to char name[10]
};


void main()
{
	struct dog thing1; //removed parentheses from "dog", changed colon to semicolon
	struct dog thing2;

	thing1.age = 5;  //removed brackets from value of thing1.age
	thing2.age = 13;
	
	puts("What is your dogs name? "); //changed curly braces to parentheses
	gets(thing1.name); //changed "thing1.names" to "thing1.name"

	strcpy(thing2.name, "Buster");

	printf("Name: %s\n",thing1.name );  //changed %i to %s
	printf("Age: %i\n",thing1.age);		//changed colon to semicolon
	printf("Thing2 Name: %s\n",thing2.name); //added missing quotation mark
	printf("Thing2 Age: %i\n",thing2.age); //added colon to text for consistency, changed single quotation to double quotation 
}
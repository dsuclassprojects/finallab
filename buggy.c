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
	char name [10];		//removed equal sign between name and char length 
}; 		


void main()
{
	struct dog thing1;	//removed parenthesis around dog and changed colon to a semicolon
	struct dog thing2;	

	thing1.age = 5;			//removed brackets around the number 5
	thing2.age = 13;
	
	puts("What is your dogs name? ");	//changed braces to parenthesis
	gets(thing1.name);		//deleted the s after name

	strcpy(thing2.name, "Buster");

	printf("Name: %s\n",thing1.name );			//changed %i to %s
	printf("Age: %i\n",thing1.age);				//changed colon to a semicolon
	printf("Thing2 Name: %s\n",thing2.name);	//added quotation mark after \n
	printf("Thing2 Age %i\n",thing2.age);		//changed apostrophe to quotation mark
}
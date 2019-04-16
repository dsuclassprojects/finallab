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
	char name[10];  //took out the equal sign
};


void main()
{
	struct dog thing1; // added semicolin and took dog out of parenthesis
	struct dog thing2;

	thing1.age = 5; // took 5 out of brackets
	thing2.age = 13;
	
	puts("What is your dogs name? "); //replaced braces with parenthesis
	gets(thing1.name); //took s off the end of name

	strcpy(thing2.name, "Buster");

	printf("Name: %s\n",thing1.name ); //changed %i to %s
	printf("Age: %i\n",thing1.age); //changed colin to a semicolin
	printf("Thing2 Name: %s\n",thing2.name); //added quotation mark at end
	printf("Thing2 Age: %i\n",thing2.age); //changed apostrophe to quotation mark
}
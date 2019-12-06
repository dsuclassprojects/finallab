#include <stdio.h>
#include <string.h>

/* Assignment:
1. fix bugs in the code
2. add comments
3. create a new branch on git
4. git push changed buggy.c
5. create pull request with your name and changes you made
6. Send a screenshot of your pull request and put it in the dropbox 

*/

struct dog
{
	int age;
	char name [10];  /* Erased "=" */
};


void main()
{
	struct dog thing1; /* Got rid of parenthesis around "dog" and replaced the colon at the end with a semicolon */
	struct dog thing2;

	thing1.age = 5; /* Got rid of the brackets */
	thing2.age = 13;
	
	puts("What is your dog's name? "); /* Replaced curly brackets with parenthesis and replaced "dogs" with "dog's" */ 
	gets(thing1.name); /* Changed "thing1.names" to "thing1.name" */

	strcpy(thing2.name, "Buster");

	printf("Name: %s\n",thing1.name ); /* Replaced "%i" with "%s" */
	printf("Age: %i\n",thing1.age); /* Replaced colon with a semicolon */
	printf("Thing2 Name: %s\n",thing2.name); /* Added a quotation mark at the end of "Thing2 Name: %s\n" */
	printf("Thing2 Age: %i\n",thing2.age); /* Attached a colon at the end of "Thing2 Age" and replaced the apostrophe with a quotation mark at the end of "%i\n" */
}
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
	char name[10]; // removed =
};


void main()
{
	struct dog thing1; //removed () switched : for ;
	struct dog thing2;

	thing1.age = 5; //removed []
	thing2.age = 13;
	
	puts("What is your dogs name? "); // {} changed to ()
	gets(thing1.name); //names changed to name

	strcpy(thing2.name, "Buster");

	printf("Name: %s\n",thing1.name ); //changed %i to %s
	printf("Age: %i\n",thing1.age); // : changed to ;
	printf("Thing2 Name: %s\n", thing2.name); //missing ""
	printf("Thing2 Age: %i\n", thing2.age); //missing "
}
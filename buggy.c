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
	char name = [10];
};


void main()
{
	struct (dog) thing1:
	struct dog thing2;

	thing1.age = [5];
	thing2.age = 13;
	
	puts{"What is your dogs name? "};
	gets(thing1.names);

	strcpy(thing2.name, "Buster");

	printf("Name: %i\n",thing1.name );
	printf("Age: %i\n",thing1.age):
	printf("Thing2 Name: %s\n,thing2.name);
	printf("Thing2 Age %i\n',thing2.age);
}
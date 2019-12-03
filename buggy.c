#include <stdio.h>
#include <string.h>

/* Assignment:
1. fix bugs in the code
2. add comments
3. create a new branch on git
4. git push changed buggy.c
5. create pull request with your name and changes you made
6. screenshot what you did and post it in the dropbox
7. make changes and push

*/

struct dog
{
	int age;
	char name [10];  //removed =
};

void main()
{
	struct dog thing1;  //removed () around dog and change : to ;
	struct dog thing2;

	thing1.age = 5; // removed []
	thing2.age = 13;
	
	puts("What is your dogs name? "); //changed {} to ()
	gets(thing1.name);  // remove s in name

	strcpy(thing2.name, "Buster");

	printf("Name: %s\n",thing1.name); //change %i to %s
	printf("Age: %i\n",thing1.age);   //change : to ;
	printf("Thing2 Name: %s\n",thing2.name);  // closed off "
	printf("Thing2 Age %i\n",thing2.age);  // changed ' to "
}
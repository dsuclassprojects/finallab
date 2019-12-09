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
	char name[10]; // you dont need the =
};


void main()
{
	struct dog thing1; //removed the () and changed the : to a ;
	struct dog thing2;

	thing1.age = 5; //removed the ()
	thing2.age = 13;
	
	puts("What is your dogs name? "); //changed the {} to ()
	gets(thing1.name); //changed names to name

	strcpy(thing2.name, "Buster");

	printf("Thing1 Name: %s\n",thing1.name ); //changed to %s instead of %i.  I also added Thing1 for continuity.
	printf("Thing1 Age: %i\n",thing1.age ); //had a : instead of ;.   I also added Thing1 for continuity.
	printf("Thing2 Name: %s\n",thing2.name ); //needed a " after the \n
	printf("Thing2 Age: %i\n",thing2.age );	//had a ' instead of ". I also added a : after age.
}
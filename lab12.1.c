#include <stdio.h>
#include <string.h>

struct dog
{
	int age;
	char name [10]; //removed =
};


void main()
{
	struct dog thing1; //changed : to ;
	struct dog thing2;

	thing1.age = 5; //removed []
	thing2.age = 13;
	
	puts("What is your dogs name? "); //changed {} to ()
	gets(thing1.name); //removed s at end of name(s)

	strcpy(thing2.name, "Buster");

	printf("Thing1 Name: %s\n",thing1.name ); //changed from %i to %s //smoothed sentence flow
	printf("Thing1 Age: %i\n",thing1.age); //smoothed sentence flow
	printf("Thing2 Name: %s\n",thing2.name); //added final " between \n and ,
	printf("Thing2 Age %i\n",thing2.age); //changed ' to "
}
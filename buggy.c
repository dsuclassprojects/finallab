#include <stdio.h>
#include <string.h>

/* Assignment:
1. fix bugs in the code
2. add comments (I wasn't sure what comments you had in mind, so I just explained the changes I made, or explained the code if no changes were necessary...)
3. create a new branch on git
4. git push changed buggy.c
5. create pull request with your name and changes you made


*/

struct dog // create new struct called 'dog'
{
	int age; // initialize integer variable
	char name[10]; // Changed from improper var declaration 'char name = [10];'
};


int main() // Changed return type from 'void' to 'int'...for some reason my compiler has never liked 'void'...
{
	struct dog thing1; // Replaced ':' with ';', replaced '(dog)' with 'dog'
	struct dog thing2; // create instance of 'dog' struct called 'thing2'

	thing1.age = 5; // Removed brackets from around property value
	thing2.age = 13; // assign age property of thing2 to 13
	
	puts("What is your dogs name? "); // Replaced curly braces with parentheses
	gets(thing1.name); // Replaced 'names' with 'name'

	strcpy(thing2.name, "Buster"); // Assign string "Buster" to name property of thing2 using strcpy()

	printf("Name: %s\n",thing1.name ); // Replaced wrong data type 'i' with 's'
	printf("Age: %i\n",thing1.age); // Changed : to ;
	printf("Thing2 Name: %s\n" ,thing2.name); // Added missing end quote
	printf("Thing2 Age %i\n",thing2.age); // Added missing end quote
}
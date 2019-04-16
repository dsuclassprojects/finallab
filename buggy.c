#include <stdio.h>
#include <string.h>

/* Assignment:
1. fix bugs in the code
2. add comments
3. create a new branch on git
4. git push changed buggy.c
5. create pull request with your name and changes you made

*/

struct dog      // creates dog as a struct
{
	int age;    // initializes age
	char name[10]; //initializes name with an size allotment of 10
};


void main()
{
	struct dog thing1;   //uses struct to create thing1
	struct dog thing2;   //uses struct to create thing2

	thing1.age = 5;	     //sets thing1 age to 5
	thing2.age = 13;     //sets thing2 age to 13
	
	puts("What is your dogs name? ");  //uses std output to ask your dogs name
	gets(thing1.name);                 //stores the std input as thing1.name

	strcpy(thing2.name, "Buster");     //uses strcpy to set thing2.name to Buster

	printf("Name: %s\n",thing1.name);  //print statement
	printf("Age: %i\n",thing1.age) ;    //print statement
	printf("Thing2 Name: %s\n",thing2.name);  //print statement
	printf("Thing2 Age: %i\n",thing2.age);  //print statement
}
#include <stdio.h>
#include <string.h>

/* Assignment:
1. fix bugs in the code
2. add comments
3. create a new branch on git
4. git push changed buggy.c
5. create pull request with your name and changes you made

*/

struct dog //declare struct with the name dog
{
	int age; //declare int variable with the name age
	char name [10]; //declare string variable with the name name
};


void main()
{
	struct dog thing1; //declare new struct within main
	struct dog thing2; //declare second new struct within main

	thing1.age = 5; //assign variable "age" the value 5 in struct thing1
	thing2.age = 13; //assign variable "age" the value 13 in struct thing2

	printf("What is your dogs name? ");//prints message
	gets(thing1.name); //accepts user input for variable "name" in thing1

	strcpy(thing2.name, "Buster"); //assigns variable "name" in thing 2 with a value

	printf("Name: %s\n",thing1.name ); //prints text including "name" from thing1
	printf("Age: %i\n",thing1.age); //prints text including "age" from thing1
	printf("Thing2 Name: %s\n",thing2.name); //prints text including "name" from thing2
	printf("Thing2 Age %i\n",thing2.age); //prints text inluding "age" from thing2
}

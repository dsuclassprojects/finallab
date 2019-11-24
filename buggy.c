/*Isaiah Keating
  csc150DT2
  lab12*/

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
	char name[10];//removed equal sign
};


int main()//changed void main to int main 
{
	struct dog thing1;//removed parenthesis and fixed semicolon
	struct dog thing2;

	thing1.age = 5;//removed brackets around 5
	thing2.age = 13;
	
	puts("What is your dogs name? ");//replaced curly brackets with parenthesis
	gets(thing1.name);//removed the s in .name

	strcpy(thing2.name, "Buster");

	printf("Name: %s\n",thing1.name );//changed int to string
	printf("Age: %i\n",thing1.age);//fixed semicolon
	printf("Thing2 Name: %s\n",thing2.name);//added quotation mark
	printf("Thing2 Age %i\n",thing2.age);//added quotation mark

	return(0);//added return
}
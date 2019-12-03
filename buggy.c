#include <stdio.h>
#include <string.h>

/* Assignment:
1. fix bugs in the code
2. add comments
3. create a new branch on git
4. git push changed buggy.c
5. create pull request with your name and changes you made
6. Send a screenshot of your pull request and put it in the drop bos
 
*/

struct dog// Creating struct
{
	int age;// age in each struct
	char name[10];// name in each struct
};


int main()
{
    struct dog thing1;// creating struct thing1
	struct dog thing2;// creating struct thing2

	thing1.age = 5;//giving thing1 an age
	thing2.age = 13;// giving thing2 an age
	
	puts ("What is your dogs name? ");//prompt for getting name struct
	gets(thing1.names);// naming thing1

	strcpy(thing2.name, "Buster");// naming thing2

	printf("Name: %s\n",thing1.name );//print "what is your dogs name?"
	printf("Age: %i\n",thing1.age):// print thing1's age
	printf("Thing2 Name: %s\n",thing2.name);//print thing2's name
	printf("Thing2 Age %i\n",thing2.age);//print thing2's age
}

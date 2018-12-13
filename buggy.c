//
//  main.c
//  lab12
//
//  Created by Matthew Skadsen on 12/12/18.
//  Copyright © 2018 Matthew Skadsen. All rights reserved.
//
#include <stdio.h>
#include <string.h>

/* Assignment:
 1. fix bugs in the code
 2. add comments
 3. create a new branch on git
 4. git push changed buggy.c
 5. create pull request with your name and changes you made
 
 */

struct dog      //creating a struct for dogs
{
    int age;        //declaring age variable
    char name [10];     //declaring name array
};


void main()
{
    struct dog thing1;      //declaring first dog thing1
    struct dog thing2;      //declaring second dog thing2
    
    thing1.age = 5;         //initializing thing1's age as 5
    thing2.age = 13;        //initializing thing2's age as 13
    
    puts("What is your dog's name? ");      //using puts to ask for dog name
    gets(thing1.name);                      //using gets to assign entered data for thing1's name
    
    strcpy(thing2.name, "Buster");          //using strcpy to assign thing2's name
    
    printf("Name: %s\n",thing1.name );      //printing thing1's name
    printf("Age: %i\n",thing1.age);         //printing thing1's age
    printf("Thing2 Name: %s\n",thing2.name);    //printing thing2's name
    printf("Thing2 Age %i\n",thing2.age);       //printing thing2's age
    
}


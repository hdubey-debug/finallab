#include <stdio.h>
#include <string.h>

/* Assignment:
1. fix bugs in the code
2. add comments
3. create a new branch on git
4. git push changed buggy.c
5. create pull request with your name and changes you made

*/

/*
Name: Harsh Dubey
Changes: See comments
Changes Made in CodeBlocks and then copied pasted in visual studio and then pushed
*/

struct dog
{
	int age;
	char name[10];//fixed the equal sign
};


void main()
{
	struct dog thing1;//removed the parenthesis and colon
	struct dog thing2;

	thing1.age = 5;//removed the brackets
	thing2.age = 13;

	puts("What is your dogs name? ");//remove - {}
	gets(thing1.name);//removed the "s" at the end

	strcpy(thing2.name, "Buster");

	printf("Thing 1 Name: %s\n", thing1.name);//programmed crashed - so change %i to %s  // Add Thing1 for better display
	printf("Thing 1 Age: %i\n", thing1.age);//change colon to semi-colon                  // Add Thing1 for better display
	printf("Thing2 Name: %s\n", thing2.name);//add - " //change position of - " to after \n
	printf("Thing2 Age %i\n'", thing2.age);//add - " //change position of - " to after
}

#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>


/**
 * struct dog - dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);


#endif

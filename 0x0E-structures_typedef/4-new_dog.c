#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - creates new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: ptr
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr;
ptr = malloc(sizeof(struct dog));
if (ptr == NULL)
return (NULL);
if (name == NULL)
{
free(ptr);
free(owner);
return (NULL);
}
if (owner == NULL)
{
free(ptr);
free(name);
return (NULL);
}
ptr->name = name;
ptr->age = age;
ptr->owner = owner;
return (ptr);
}

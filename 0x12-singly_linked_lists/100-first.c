#include <stdio.h>
#include "lists.h"

/**
 * calledFirst - element to be printed before main
 */

void __attribute__((constructor)) calledFirst()
{
printf("You're beat! and yet, you must allow,\n I bore my house upon my back!\n");
}

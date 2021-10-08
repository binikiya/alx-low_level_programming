#include "hash_tables.h"

/**
 * key_index - a function that gives index of the key
 * @key: the key
 * @size: size of array
 *
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}

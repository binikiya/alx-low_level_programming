#include "holberton.h"
#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file
 * @text_content: null terminated string to write to the file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
int dest, size, i = 0;
char *buffer;
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);
while (text_content[i] != '\0')
i++;
buffer = malloc(sizeof(char) * i);
if (buffer == NULL)
return (-1);
dest = open(filename, O_RDWR | O_APPEND);
size = write(dest, text_content, i);
if (dest == -1 || size == -1)
return (-1);
close(dest);
free(buffer);
return (1);
}

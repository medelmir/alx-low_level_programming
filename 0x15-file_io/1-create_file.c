#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to write to file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int filed, i, wr;
if (!filename)
return (-1);
filed = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
for (i = 0; text_content[i] != '\0'; i++)
;
if (filed == -1)
return (-1);
if (text_content == NULL)
return (1);
wr = write(filed, text_content, i);
if (wr == -1)
return (-1);
close(filed);
return (1);
}


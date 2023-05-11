#include "main.h"
/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: file name.
 * @text_content: content to append.
 * Return: 1 on success and -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int filed, i = 0, wr;
if (filename == NULL)
return (-1);
filed = open(filename, O_WRONLY | O_APPEND);
if (filed == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[i])
i++;
wr = write(filed, text_content, i);
if (wr == -1)
return (-1);
}
close(filed);
return (1);
}

#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: name of the file to read.
 * @letters: number of letters to read and print.
 * Return: number of letters read and printed or 0 if fail.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t readed, printed;
char *buffer;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
readed = read(fd, buffer, letters);
if (readed == -1)
{
free(buffer);
return (0);
}
printed = write(STDOUT_FILENO, buffer, readed);
if (printed == -1)
{
free(buffer);
return (0);
}
free(buffer);
close(fd);
return (printed);
}
